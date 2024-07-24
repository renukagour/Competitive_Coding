public class BinaryStringOperations {

    public static int operationsBinaryString(String str) {
        // If the input string is null, return -1 as specified
        if (str == null || str.length() == 0) {
            return -1;
        }

        // Initialize the result with the first binary digit
        int result = str.charAt(0) - '0';  // Convert character to integer

        // Iterate through the string and perform operations accordingly
        for (int i = 1; i < str.length(); i += 2) {
            char operation = str.charAt(i);
            int nextDigit = str.charAt(i + 1) - '0';

            switch (operation) {
                case 'A':
                    result = result & nextDigit;
                    break;
                case 'B':
                    result = result | nextDigit;
                    break;
                case 'C':
                    result = result ^ nextDigit;
                    break;
                default:
                    throw new IllegalArgumentException("Invalid operation: " + operation);
            }
        }

        return result;
    }

    public static void main(String[] args) {
        // Test cases
        String str1 = "1C0C1C1A0B1";
        String str2 = "0C1A1B1C1C1B0A0";

        System.out.println(operationsBinaryString(str1));  // Output: 1
        System.out.println(operationsBinaryString(str2));  // Output: 0
    }
}
