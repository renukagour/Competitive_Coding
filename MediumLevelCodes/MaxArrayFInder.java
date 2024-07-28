public class MaxArrayFInder {
    public static void main(String[] args) {
        // Example input
        int[] arr = {23, 45, 82, 27, 66, 12, 78, 13, 71, 86};
        int length = arr.length;
        
        // Calling the MaxInArray function
        MaxInArray(arr, length);
    }

    public static void MaxInArray(int[] arr, int length) {
        // Check if the array is not empty
        if (length == 0) {
            return; // Do nothing if the array is empty
        }

        // Initialize variables to store the maximum element and its index
        int maxElement = arr[0];
        int maxIndex = 0;

        // Iterate through the array to find the maximum element and its index
        for (int i = 1; i < length; i++) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
                maxIndex = i;
            }
        }

        // Print the maximum element and its index in separate lines
        System.out.println(maxElement);
        System.out.println(maxIndex);
    }
}
