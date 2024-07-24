public class HexToBinary {
    public static String hexToBinary(String hex) {
        int decimal = Integer.parseInt(hex, 16);
        return Integer.toBinaryString(decimal);
    }

    public static void main(String[] args) {
        String hex = "1A3";
        String binary = hexToBinary(hex);
        System.out.println("Hex: " + hex + " -> Binary: " + binary);
    }
}
