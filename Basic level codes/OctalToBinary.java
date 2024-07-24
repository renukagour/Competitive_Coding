public class OctalToBinary {
    public static String octalToBinary(String octal) {
        StringBuilder binary = new StringBuilder();
        
        for (char digit : octal.toCharArray()) {
            int decimal = Character.digit(digit, 8);
            String binaryString = Integer.toBinaryString(decimal);
            while (binaryString.length() < 3) {
                binaryString = "0" + binaryString; // Pad with leading zeros
            }
            binary.append(binaryString);
        }
        
        return binary.toString();
    }

    public static void main(String[] args) {
        String octal = "345";
        String binary = octalToBinary(octal);
        System.out.println("Octal: " + octal + " -> Binary: " + binary);
    }
}
