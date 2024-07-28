import java.util.Arrays;

public class ProductSmallestPair {

    public static int productSmallestPair(int sum, int[] arr) {
        // Check if the array is null or contains fewer than 2 elements
        if (arr == null || arr.length < 2) {
            return -1;
        }

        // Sort the array
        Arrays.sort(arr);

        // Get the two smallest elements
        int smallest = arr[0];
        int secondSmallest = arr[1];

        // Check if their sum is less than or equal to the given sum
        if (smallest + secondSmallest <= sum) {
            // Return their product
            return smallest * secondSmallest;
        } else {
            // If no such pair is found, return 0
            return 0;
        }
    }

    public static void main(String[] args) {
        // Test cases
        int[] arr1 = {5, 2, 4, 3, 9, 7, 1};
        System.out.println(productSmallestPair(9, arr1)); // Output: 2

        int[] arr2 = {9, 8, 3, -7, 3, 9};
        System.out.println(productSmallestPair(4, arr2)); // Output: -21

        int[] arr3 = {1};
        System.out.println(productSmallestPair(5, arr3)); // Output: -1

        int[] arr4 = {};
        System.out.println(productSmallestPair(5, arr4)); // Output: -1

        int[] arr5 = {5, 4, 3, 2, 1};
        System.out.println(productSmallestPair(2, arr5)); // Output: 0
    }
}
