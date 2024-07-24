public class DecimalToBinary {
    public static String decimalToBinary(int number) {
        if (number == 0) {
            return "0";
        }

        StringBuilder binary = new StringBuilder();
        
        while (number > 0) {
            // Append the remainder of number/2 to the binary representation
            binary.append(number % 2);
            // Divide the number by 2
            number = number / 2;
        }

        // Reverse the string to get the correct binary representation
        return binary.reverse().toString();
    }

    public static void main(String[] args) {
        int number = 10;
        String binary = decimalToBinary(number);
        System.out.println("Decimal: " + number + " -> Binary: " + binary);
    }
}
