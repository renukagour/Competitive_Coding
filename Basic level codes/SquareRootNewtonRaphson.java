public class SquareRootNewtonRaphson {
    public static double sqrt(double number) {
        if (number < 0) {
            throw new IllegalArgumentException("Cannot compute square root of a negative number");
        }
        if (number == 0 || number == 1) {
            return number;
        }

        double x = number;
        double epsilon = 1e-7; // Precision threshold

        while (Math.abs(x - number / x) > epsilon * x) {
            x = (x + number / x) / 2.0;
        }

        return x;
    }

    public static void main(String[] args) {
        double number = 49;
        double result = sqrt(number);
        System.out.println("Square root of " + number + " is " + result);
    }
}
