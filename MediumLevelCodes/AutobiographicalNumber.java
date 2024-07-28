import java.util.HashSet;
import java.util.Set;

public class AutobiographicalNumber {

    public static void main(String[] args) {
        // Example input
        String n = "1210";

        // Call the function and print the result
        int result = findAutoCount(n);
        System.out.println(result);
    }

    public static int findAutoCount(String n) {
        // Check if the input string is null
        if (n == null) {
            return 0;
        }

        // Convert the string to a character array
        char[] digits = n.toCharArray();
        int length = digits.length;

        // Create an array to count the occurrences of each digit
        int[] count = new int[10];

        // Count the occurrences of each digit in the string
        for (char digit : digits) {
            count[digit - '0']++;
        }

        // Check if the number is autobiographical
        for (int i = 0; i < length; i++) {
            if (count[i] != digits[i] - '0') {
                return 0;
            }
        }

        // Use a set to count distinct digits in the input string
        Set<Character> distinctDigits = new HashSet<>();
        for (char digit : digits) {
            distinctDigits.add(digit);
        }

        // Return the count of distinct digits
        return distinctDigits.size();
    }
}
