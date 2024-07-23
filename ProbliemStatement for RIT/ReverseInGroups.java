import java.util.Arrays;

public class ReverseInGroups {
    public static void reverseInGroups(int[] arr, int n, int k) {
        for (int i = 0; i < n; i += k) {
            // Calculate the end index of the current group
            int left = i;
            int right = Math.min(i + k - 1, n - 1);
            
            // Reverse the elements in the current group
            while (left < right) {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;
                right--;
            }
        }
    }

    public static void main(String[] args) {
        // Example 1
        int[] arr1 = {1, 2, 3, 4, 5};
        int n1 = arr1.length;
        int k1 = 3;
        reverseInGroups(arr1, n1, k1);
        System.out.println("Output: " + Arrays.toString(arr1)); // Output: [3, 2, 1, 5, 4]

        // Example 2
        int[] arr2 = {5, 6, 8, 9};
        int n2 = arr2.length;
        int k2 = 3;
        reverseInGroups(arr2, n2, k2);
        System.out.println("Output: " + Arrays.toString(arr2)); // Output: [8, 6, 5, 9]
    }
}
