public class SquareRootBinarySearch {
    public static double sqrt(double number) {
        if (number < 0) {
            throw new IllegalArgumentException("Cannot compute square root of a negative number");
        }
        if (number == 0 || number == 1) {
            return number;
        }

        double start = 0, end = number;
        double mid;
        double epsilon = 1e-7; // Precision threshold

        while ((end - start) > epsilon) {
            mid = (start + end) / 2.0;
            if (mid * mid == number) {
                return mid;
            } else if (mid * mid < number) {
                start = mid;
            } else {
                end = mid;
            }
        }

        return (start + end) / 2.0;
    }

    public static void main(String[] args) {
        double number = 49;
        double result = sqrt(number);
        System.out.println("Square root of " + number + " is " + result);
    }
}
