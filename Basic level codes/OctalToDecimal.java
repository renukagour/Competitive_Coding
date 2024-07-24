public class OctalToDecimal {
    public static int octalToDecimal(String octal) {
        return Integer.parseInt(octal, 8);
    }

    public static void main(String[] args) {
        String octal = "345";
        int decimal = octalToDecimal(octal);
        System.out.println("Octal: " + octal + " -> Decimal: " + decimal);
    }
}
