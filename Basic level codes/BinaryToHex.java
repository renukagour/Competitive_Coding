public class BinaryToHex {
    public static String binaryToHex(String binary) {
        int decimal = Integer.parseInt(binary, 2);
        return Integer.toHexString(decimal).toUpperCase();
    }

    public static void main(String[] args) {
        String binary = "1101011";
        String hex = binaryToHex(binary);
        System.out.println("Binary: " + binary + " -> Hex: " + hex);
    }
}
