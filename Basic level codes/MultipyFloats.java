import java.util.Scanner;

public class MultipyFloats {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the first floating-point number from the user
        System.out.print("Enter the first floating-point number: ");
        float num1 = scanner.nextFloat();

        // Input the second floating-point number from the user
        System.out.print("Enter the second floating-point number: ");
        float num2 = scanner.nextFloat();

        // Multiply the two floating-point numbers
        float result = num1 * num2;

        // Output the result
        System.out.printf("The product of %.2f and %.2f is: %.2f%n", num1, num2, result);

        scanner.close();
    }
}
