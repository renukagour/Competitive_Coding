import java.util.Arrays;

public class MergeArrays {
    public static void merge(int[] arr1, int n, int[] arr2, int m) {
        int gap = nextGap(n + m);

        while (gap > 0) {
            int i = 0;
            int j = gap;

            // Compare elements in arr1
            while (j < n) {
                if (arr1[i] > arr1[j]) {
                    int temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
                i++;
                j++;
            }

            // Compare elements between arr1 and arr2
            j = j - n;
            while (i < n && j < m) {
                if (arr1[i] > arr2[j]) {
                    int temp = arr1[i];
                    arr1[i] = arr2[j];
                    arr2[j] = temp;
                }
                i++;
                j++;
            }

            // Compare elements in arr2
            if (j < m) {
                i = 0;
                while (j < m) {
                    if (arr2[i] > arr2[j]) {
                        int temp = arr2[i];
                        arr2[i] = arr2[j];
                        arr2[j] = temp;
                    }
                    i++;
                    j++;
                }
            }

            gap = nextGap(gap);
        }
    }

    private static int nextGap(int gap) {
        if (gap <= 1) {
            return 0;
        }
        return (gap / 2) + (gap % 2);
    }

    public static void main(String[] args) {
        // Example 1
        int[] arr1 = {1, 3, 5, 7};
        int[] arr2 = {0, 2, 6, 8, 9};
        merge(arr1, arr1.length, arr2, arr2.length);
        System.out.println("arr1: " + Arrays.toString(arr1));
        System.out.println("arr2: " + Arrays.toString(arr2));

        // Example 2
        int[] arr1_2 = {10, 12};
        int[] arr2_2 = {5, 18, 20};
        merge(arr1_2, arr1_2.length, arr2_2, arr2_2.length);
        System.out.println("arr1: " + Arrays.toString(arr1_2));
        System.out.println("arr2: " + Arrays.toString(arr2_2));
    }
}
