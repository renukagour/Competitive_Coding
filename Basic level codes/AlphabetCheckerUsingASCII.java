import java.util.Scanner;

public class AlphabetCheckerUsingASCII {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input a character from the user
        System.out.print("Enter a character: ");
        char asciiValue = scanner.next().charAt(0);

        // Get ASCII value of the character
        // int asciiValue = (int) character;

        // Check if the ASCII value falls within the range of alphabet letters
        if ((asciiValue >= 65 && asciiValue <= 90) || (asciiValue >= 97 && asciiValue <= 122)) {
            System.out.printf("The character '%c' is an alphabet letter.%n", asciiValue);
        } else {
            System.out.printf("The character '%c' is not an alphabet letter.%n", asciiValue);
        }

        scanner.close();
    }
}
