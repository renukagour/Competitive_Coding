import java.util.Stack;

public class BinaryStringOperationsStack {

    public static int operationsBinaryString(String str) {
        if (str == null || str.length() == 0) {
            return -1;
        }

        Stack<Integer> values = new Stack<>();
        Stack<Character> operations = new Stack<>();

        values.push(str.charAt(0) - '0');

        for (int i = 1; i < str.length(); i += 2) {
            char operation = str.charAt(i);
            int nextDigit = str.charAt(i + 1) - '0';

            while (!operations.isEmpty() && precedence(operation) <= precedence(operations.peek())) {
                int b = values.pop();
                int a = values.pop();
                values.push(applyOperation(a, b, operations.pop()));
            }

            values.push(nextDigit);
            operations.push(operation);
        }

        while (!operations.isEmpty()) {
            int b = values.pop();
            int a = values.pop();
            values.push(applyOperation(a, b, operations.pop()));
        }

        return values.pop();
    }

    private static int precedence(char operation) {
        switch (operation) {
            case 'A':
                return 1;
            case 'B':
                return 2;
            case 'C':
                return 3;
            default:
                return -1;
        }
    }

    private static int applyOperation(int a, int b, char operation) {
        switch (operation) {
            case 'A':
                return a & b;
            case 'B':
                return a | b;
            case 'C':
                return a ^ b;
            default:
                throw new IllegalArgumentException("Invalid operation: " + operation);
        }
    }

    public static void main(String[] args) {
        // Test cases
        String str1 = "1C0C1C1A0B1";
        String str2 = "0C1A1B1C1C1B0A0";

        System.out.println(operationsBinaryString(str1));  // Output: 1
        System.out.println(operationsBinaryString(str2));  // Output: 0
    }
}
