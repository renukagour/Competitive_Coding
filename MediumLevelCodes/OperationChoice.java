public class OperationChoice {
   
        public static void main(String[] args) {
            // Testing OperationChoices
            System.out.println(OperationChoices(1, 12, 16)); // Output: 28
            System.out.println(OperationChoices(2, 16, 20)); // Output: -4
            System.out.println(OperationChoices(3, 5, 4)); // Output: 20
            System.out.println(OperationChoices(4, 20, 5)); // Output: 4
        }
    
        public static int OperationChoices(int c, int a, int b) {
            switch (c) {
                case 1:
                    return a + b;
                case 2:
                    return a - b;
                case 3:
                    return a * b;
                case 4:
                    // Assumption is that all operations result in integer output,
                    // so integer division is performed here
                    return a / b;
                default:
                    throw new IllegalArgumentException("Invalid operation code: " + c);
            }
        }
    
    
}
