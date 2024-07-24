public class BinaryToDecimal {
    public static int binaryToDecimal(String binary) {
        int decimal = 0;
        int length = binary.length();
        
        for (int i = 0; i < length; i++) {
            if (binary.charAt(length - 1 - i) == '1') {
                decimal += Math.pow(2, i);
            }
        }
        
        return decimal;
    }

    public static void main(String[] args) {
        String binary = "101011";
        int decimal = binaryToDecimal(binary);
        System.out.println("Binary: " + binary + " -> Decimal: " + decimal);
    }
}
