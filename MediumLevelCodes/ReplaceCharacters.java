public class ReplaceCharacters {

    public static void main(String[] args) {
        // Testing ReplaceCharacter
        String test1 = "apples";
        System.out.println(ReplaceCharacter(test1.toCharArray(), test1.length(), 'a', 'p')); // Output: paales

        String test2 = "banana";
        System.out.println(ReplaceCharacter(test2.toCharArray(), test2.length(), 'b', 'n')); // Output: nanaba
    }

    public static String ReplaceCharacter(char str[], int n, char ch1, char ch2) {
        // Check if the input string is null
        if (str == null) {
            return null;
        }

        // If ch1 and ch2 are the same, return the string unchanged
        if (ch1 == ch2) {
            return new String(str);
        }

        // Flags to check if ch1 and ch2 are present in the string
        boolean ch1Present = false;
        boolean ch2Present = false;

        // First pass to check if both ch1 and ch2 are in the string
        for (int i = 0; i < n; i++) {
            if (str[i] == ch1) {
                ch1Present = true;
            } else if (str[i] == ch2) {
                ch2Present = true;
            }

            // If both characters are found, break early
            if (ch1Present && ch2Present) {
                break;
            }
        }

        // If neither character is found, return the string unchanged
        if (!ch1Present && !ch2Present) {
            return new String(str);
        }

        // Second pass to replace characters
        for (int i = 0; i < n; i++) {
            if (str[i] == ch1) {
                str[i] = ch2;
            } else if (str[i] == ch2) {
                str[i] = ch1;
            }
        }

        return new String(str);
    }
}
