import java.util.regex.Pattern;

public class CheckPassword {

    public static int CheckPasswordfun(char[] str, int n) {
        // Convert char array to string
        String password = new String(str);

        // Condition 1: At least 4 characters
        if (n < 4) {
            return 0;
        }

        // Regular expression to check if password is valid
        // ^(?![\d]).{4,}$ ensures the string has at least 4 characters and does not start with a digit
        // ^(?!.*[ /]).*$ ensures no spaces or slashes
        // ^.*[0-9].*$ ensures at least one numeric digit
        // ^.*[A-Z].*$ ensures at least one uppercase letter
        String regex = "^(?![\\d])[\\S]{4,}$";
        String noSpaceSlash = "^(?!.*[ /]).*$";
        String hasDigit = ".*[0-9].*";
        String hasUpperCase = ".*[A-Z].*";

        // Check all conditions using the regular expressions
        if (Pattern.matches(regex, password) &&
            Pattern.matches(noSpaceSlash, password) &&
            Pattern.matches(hasDigit, password) &&
            Pattern.matches(hasUpperCase, password)) {
            return 1;
        }

        return 0;
    }

    public static void main(String[] args) {
        // Test cases
        char[] password1 = "aA1_67".toCharArray();
        char[] password2 = "a987 abC012".toCharArray();

        System.out.println(CheckPasswordfun(password1, password1.length)); // Output: 1
        System.out.println(CheckPasswordfun(password2, password2.length)); // Output: 0
    }
}
