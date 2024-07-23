import java.util.HashSet;

public class PythogorousTriplet {
    public static boolean checkTriplet(int[] arr, int n) {
        // Create a set to store squares of all elements
        HashSet<Integer> squares = new HashSet<>();
        for (int i = 0; i < n; i++) {
            squares.add(arr[i] * arr[i]);
        }

        // Iterate over each pair of elements
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int sumOfSquares = arr[i] * arr[i] + arr[j] * arr[j];
                if (squares.contains(sumOfSquares)) {
                    return true;
                }
            }
        }

        return false;
    }

    public static void main(String[] args) {
        int[] arr1 = {3, 2, 4, 6, 5};
        int n1 = arr1.length;
        System.out.println(checkTriplet(arr1, n1) ? "Yes" : "No"); // Output: Yes

        int[] arr2 = {3, 8, 5};
        int n2 = arr2.length;
        System.out.println(checkTriplet(arr2, n2) ? "Yes" : "No"); // Output: No
    }
}
