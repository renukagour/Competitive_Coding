public class RatsAndHouses {

    public static int minimumHouses(int r, int unit, int[] arr) {
        // Check if the array is null
        if (arr == null) {
            return -1;
        }

        // Calculate the total food required for all rats
        int totalFoodRequired = r * unit;

        // Variable to keep track of cumulative food available
        int cumulativeFood = 0;

        // Iterate through the array and calculate the cumulative food
        for (int i = 0; i < arr.length; i++) {
            cumulativeFood += arr[i];

            // If the cumulative food meets or exceeds the required amount, return the house count
            if (cumulativeFood >= totalFoodRequired) {
                return i + 1; // i + 1 because house numbers are 1-based
            }
        }

        // If total food from all houses is insufficient, return 0
        return 0;
    }

    public static void main(String[] args) {
        // Test cases
        int r1 = 7, unit1 = 2;
        int[] arr1 = {2, 8, 3, 5, 7, 4, 1, 2};
        System.out.println(minimumHouses(r1, unit1, arr1));  // Output: 4

        int r2 = 5, unit2 = 3;
        int[] arr2 = {1, 2, 3, 4, 5};
        System.out.println(minimumHouses(r2, unit2, arr2));  // Output: 0

        int r3 = 10, unit3 = 1;
        int[] arr3 = {5, 5, 5, 5, 5};
        System.out.println(minimumHouses(r3, unit3, arr3));  // Output: 2
    }
}
