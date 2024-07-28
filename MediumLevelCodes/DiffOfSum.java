public class DiffOfSum {

    public static int differenceOfSum(int n, int m) {
        // Initialize the sums
        int sumDivisible = 0;
        int sumNotDivisible = 0;

        // Iterate through the range from 1 to m
        for (int i = 1; i <= m; i++) {
            if (i % n == 0) {
                // If the number is divisible by n, add to sumDivisible
                sumDivisible += i;
            } else {
                // If the number is not divisible by n, add to sumNotDivisible
                sumNotDivisible += i;
            }
        }

        // Calculate and return the difference
        return sumNotDivisible - sumDivisible;
    }

    public static void main(String[] args) {
        // Test cases
        System.out.println(differenceOfSum(4, 20)); // Output: 90
        System.out.println(differenceOfSum(3, 10)); // Output: 19
    }
}
