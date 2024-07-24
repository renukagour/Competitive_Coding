public class DecimalToOctal {
    public static String decimalToOctal(int decimal) {
        return Integer.toOctalString(decimal);
    }

    public static void main(String[] args) {
        int decimal = 233;
        String octal = decimalToOctal(decimal);
        System.out.println("Decimal: " + decimal + " -> Octal: " + octal);
    }
}
