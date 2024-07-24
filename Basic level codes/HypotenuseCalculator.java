import java.util.Scanner;

public class HypotenuseCalculator {
    // Function to calculate the hypotenuse
    public static double calculateHypotenuse(double a, double b) {
        return Math.sqrt(a * a + b * b);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the lengths of the two sides
        System.out.print("Enter the length of side a: ");
        double a = scanner.nextDouble();
        System.out.print("Enter the length of side b: ");
        double b = scanner.nextDouble();

        // Calculate the hypotenuse
        double hypotenuse = calculateHypotenuse(a, b);

        // Output the result
        System.out.printf("The length of the hypotenuse is: %.2f%n", hypotenuse);
        
        scanner.close();
    }
}
