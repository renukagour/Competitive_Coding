public class NumberSum {

    public static void main(String[] args) {
        // Testing Calculate
        System.out.println(Calculate(12, 50));  // Output: 90
        System.out.println(Calculate(100, 160)); // Output: 510
    }

    public static int Calculate(int m, int n) {
        int sum = 0;

        // Iterate through the range from m to n
        for (int i = m; i <= n; i++) {
            // Check if the number is divisible by both 3 and 5
            if (i % 15== 0) {
                sum += i;
            }
        }

        return sum;
    }
}
