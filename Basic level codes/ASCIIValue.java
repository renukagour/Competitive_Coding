import java.util.Scanner;

public class ASCIIValue {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input a character from the user
        System.out.print("Enter a character: ");
        char character = scanner.next().charAt(0);

        // Find the ASCII value of the character
        int asciiValue = (int) character;

        // Output the result
        System.out.printf("The ASCII value of '%c' is: %d%n", character, asciiValue);
        
        scanner.close();
    }
}
