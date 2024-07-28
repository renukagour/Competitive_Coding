public class PasswordChecker {

    public static int CheckPassword(char[] str, int n) {
        // Condition 1: At least 4 characters
        if (n < 4) {
            return 0;
        }

        boolean hasDigit = false;
        boolean hasCapitalLetter = false;

        // Condition 5: Starting character must not be a number
        if (Character.isDigit(str[0])) {
            return 0;
        }

        for (int i = 0; i < n; i++) {
            char c = str[i];

            // Condition 4: Must not have space or slash (/)
            if (c == ' ' || c == '/') {
                return 0;
            }

            // Condition 2: At least one numeric digit
            if (Character.isDigit(c)) {
                hasDigit = true;
            }

            // Condition 3: At least one Capital Letter
            if (Character.isUpperCase(c)) {
                hasCapitalLetter = true;
            }
        }

        // Check if all required conditions are met
        if (hasDigit && hasCapitalLetter) {
            return 1;
        }

        return 0;
    }

    public static void main(String[] args) {
        // Test cases
        char[] password1 = "aA1_67".toCharArray();
        char[] password2 = "a987 abC012".toCharArray();

        System.out.println(CheckPassword(password1, password1.length)); // Output: 1
        System.out.println(CheckPassword(password2, password2.length)); // Output: 0
    }
}
