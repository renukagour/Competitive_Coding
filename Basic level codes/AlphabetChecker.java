import java.util.Scanner;

public class AlphabetChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input a character from the user
        System.out.print("Enter a character: ");
        char character = scanner.next().charAt(0);

        // Check if the character is an alphabet letter
        if (Character.isLetter(character)) {
            System.out.printf("The character '%c' is an alphabet letter.%n", character);
        } else {
            System.out.printf("The character '%c' is not an alphabet letter.%n", character);
        }

        scanner.close();
    }
}
