import java.util.ArrayList;
import java.util.Collections;

public class LargeSmallSum {

    public static int largeSmallSum(int[] arr) {
        // Check if array is empty or length is 3 or less
        if (arr == null || arr.length <= 3) {
            return 0;
        }

        ArrayList<Integer> evenIndexedElements = new ArrayList<>();
        ArrayList<Integer> oddIndexedElements = new ArrayList<>();

        // Separate even-indexed and odd-indexed elements
        for (int i = 0; i < arr.length; i++) {
            if (i % 2 == 0) {
                evenIndexedElements.add(arr[i]);
            } else {
                oddIndexedElements.add(arr[i]);
            }
        }

        // Sort the lists
        Collections.sort(evenIndexedElements);
        Collections.sort(oddIndexedElements);

        // Get second largest from even-indexed and second smallest from odd-indexed
        int secondLargestEven = evenIndexedElements.get(evenIndexedElements.size() - 2);
        int secondSmallestOdd = oddIndexedElements.get(1);

        // Return the sum
        return secondLargestEven + secondSmallestOdd;
    }

    public static void main(String[] args) {
        // Test cases
        int[] arr1 = {3, 2, 1, 7, 5, 4};
        System.out.println(largeSmallSum(arr1)); // Output: 7

        int[] arr2 = {1, 8, 0, 2, 3, 5, 6};
        System.out.println(largeSmallSum(arr2)); // Output: 8

        int[] arr3 = {4, 1, 6, 3, 7, 5};
        System.out.println(largeSmallSum(arr3)); // Output: 9

        int[] arr4 = {2, 3};
        System.out.println(largeSmallSum(arr4)); // Output: 0
    }
}
