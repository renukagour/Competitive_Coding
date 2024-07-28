public class MaxExponent {
        public static void main(String[] args) {
            // Testing MaxExponents
            System.out.println(MaxExponents(7, 12)); // Output: 8
            System.out.println(MaxExponents(10, 20)); // Output: 16
            System.out.println(MaxExponents(1, 5)); // Output: 4
        }
    
        public static int MaxExponents(int a, int b) {
            int maxExponent = -1;
            int numberWithMaxExponent = a;
    
            for (int i = a; i <= b; i++) {
                int currentExponent = getExponentOfTwo(i);
    
                if (currentExponent > maxExponent) {
                    maxExponent = currentExponent;
                    numberWithMaxExponent = i;
                }
            }
    
            return numberWithMaxExponent;
        }
    
        private static int getExponentOfTwo(int num) {
            int exponent = 0;
    
            while (num % 2 == 0) {
                exponent++;
                num /= 2;
            }
    
            return exponent;
        }
    }
    

