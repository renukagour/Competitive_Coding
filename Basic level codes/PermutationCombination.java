import java.util.Scanner;

public class PermutationCombination {

    // Utility method to calculate factorial
    public static long factorial(int num) {
        long result = 1;
        for (int i = 1; i <= num; i++) {
            result *= i;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input values for n and r
        System.out.print("Enter value for n: ");
        int n = scanner.nextInt();
        System.out.print("Enter value for r: ");
        int r = scanner.nextInt();

        // Calculate nPr
        long nPr = factorial(n) / factorial(n - r);

        // Calculate nCr
        long nCr = factorial(n) / (factorial(r) * factorial(n - r));

        // Print the results
        System.out.printf("The value of %dP%d is %d%n", n, r, nPr);
        System.out.printf("The value of %dC%d is %d%n", n, r, nCr);

        scanner.close();
    }
}
