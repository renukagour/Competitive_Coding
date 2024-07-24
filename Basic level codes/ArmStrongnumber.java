public class ArmStrongnumber {
    // Precompute powers of digits from 0 to 9 up to the maximum number of digits (10)
    private static int[][] power = new int[10][11];

    static {
        for (int i = 0; i <= 9; i++) {
            for (int j = 0; j <= 10; j++) {
                power[i][j] = (int) Math.pow(i, j);
            }
        }
    }

    // Method to check if a number is an Armstrong number
    public static boolean isArmstrong(int number) {
        int originalNumber = number;
        int sum = 0;
        int digits = String.valueOf(number).length();

        while (number > 0) {
            int digit = number % 10;
            sum += power[digit][digits];
            number /= 10;
        }

        return sum == originalNumber;
    }

    // Main method to test the Armstrong number checker
    public static void main(String[] args) {
        int number = 153;
        if (isArmstrong(number)) {
            System.out.println(number + " is an Armstrong number.");
        } else {
            System.out.println(number + " is not an Armstrong number.");
        }
    }
}
