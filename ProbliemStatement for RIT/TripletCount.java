import java.util.Arrays;

public class TripletCount {
    public static int countTriplet(int[] arr, int n) {
        Arrays.sort(arr);
        
        int count = 0;
        
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                int sum = arr[i] + arr[j];
                if (binarySearch(arr, j + 1, n - 1, sum)) {
                    count++;
                }
            }
        }
        
        return count;
    }

    private static boolean binarySearch(int[] arr, int start, int end, int sum) {
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == sum) {
                return true;
            }
            
            if (arr[mid] < sum) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return false;
    }

    public static void main(String[] args) {
        int[] arr1 = {1, 5, 3, 2};
        int n1 = arr1.length;
        System.out.println("Number of triplets: " + countTriplet(arr1, n1)); 
        int[] arr2 = {2, 3, 4};
        int n2 = arr2.length;
        System.out.println("Number of triplets: " + countTriplet(arr2, n2)); 
    }
}
