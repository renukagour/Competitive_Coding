public class NBaseNotation {
    
    public static void main(String[] args) {
        System.out.println(DectoNBase(12, 718)); // Output: 4BA
        System.out.println(DectoNBase(21, 5678)); // Output: C98
    }

    public static String DectoNBase(int n, int num) {
        // Base case: if the number is 0, return "0"
        if (num == 0) {
            return "0";
        }

        // String to store the characters for n-base notation
        String symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        // StringBuilder to build the n-base representation
        StringBuilder nBaseNumber = new StringBuilder();

        // Loop to convert the number to n-base
        while (num > 0) {
            // Get the remainder and use it as index to get the corresponding symbol
            int remainder = num % n;
            nBaseNumber.append(symbols.charAt(remainder));
            // Update num to the quotient of the division
            num = num / n;
        }

        // Reverse the StringBuilder as we need the remainders from last to first
        return nBaseNumber.reverse().toString();
    }
}
