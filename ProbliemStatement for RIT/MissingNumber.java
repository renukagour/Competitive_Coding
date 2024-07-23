public class MissingNumber {
    public static int findMissingNumber(int[] arr, int n) {
        // Calculate the expected sum of the first n natural numbers
        int expectedSum = n * (n + 1) / 2;

        // Calculate the actual sum of the elements in the array
        int actualSum = 0;
        for (int num : arr) {
            actualSum += num;
        }

        // The missing number is the difference between the expected sum and the actual sum
        return expectedSum - actualSum;
    }

    public static void main(String[] args) {
        // Example 1
        int n1 = 5;
        int[] arr1 = {1, 2, 3, 5};
        System.out.println("Missing number: " + findMissingNumber(arr1, n1)); // Output: 4

        // Example 2
        int n2 = 2;
        int[] arr2 = {1};
        System.out.println("Missing number: " + findMissingNumber(arr2, n2)); // Output: 2
    }
}
