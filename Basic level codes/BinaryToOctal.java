public class BinaryToOctal {
    public static String binaryToOctal(String binary) {
        int decimal = Integer.parseInt(binary, 2);
        return Integer.toOctalString(decimal);
    }

    public static void main(String[] args) {
        String binary = "1101011";
        String octal = binaryToOctal(binary);
        System.out.println("Binary: " + binary + " -> Octal: " + octal);
    }
}
