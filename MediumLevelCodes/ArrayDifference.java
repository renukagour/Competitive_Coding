public class ArrayDifference {

    public static int findCount(int[] arr, int length, int num, int diff) {
        // Initialize the count of elements meeting the condition
        int count = 0;

        // Iterate through the array
        for (int i = 0; i < length; i++) {
            // Check if the absolute difference is less than or equal to 'diff'
            if (Math.abs(arr[i] - num) <= diff) {
                count++;
            }
        }

        // If no elements meet the condition, return -1
        if (count == 0) {
            return -1;
        }

        // Return the count of elements meeting the condition
        return count;
    }

    public static void main(String[] args) {
        // Test cases
        int[] arr1 = {12, 3, 14, 56, 77, 13};
        int num1 = 13;
        int diff1 = 2;
        System.out.println(findCount(arr1, arr1.length, num1, diff1)); // Output: 3

        int[] arr2 = {1, 2, 3, 4, 5};
        int num2 = 10;
        int diff2 = 2;
        System.out.println(findCount(arr2, arr2.length, num2, diff2)); // Output: -1

        int[] arr3 = {10, 20, 30, 40, 50};
        int num3 = 25;
        int diff3 = 10;
        System.out.println(findCount(arr3, arr3.length, num3, diff3)); // Output: 2
    }
}
