import java.util.Scanner;

public class CapitalLetterChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input a character from the user
        System.out.print("Enter a character: ");
        char character = scanner.next().charAt(0);

        // Check if the character is a capital letter
        if (Character.isUpperCase(character)) {
            System.out.printf("The character '%c' is a capital letter.%n", character);
        } else {
            System.out.printf("The character '%c' is not a capital letter.%n", character);
        }

        scanner.close();
    }
}
