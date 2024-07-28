public class MoveHyphen {
           public static void main(String[] args) {
            System.out.println(MoveHyphenfun("Move-Hyphens-to-Front".toCharArray(), 21)); // Output: "---MoveHyphenstoFront"
            System.out.println(MoveHyphenfun("String-Compare".toCharArray(), 14)); // Output: "-StringCompare"
        }
    
        public static String MoveHyphenfun(char str[], int n) {
            if (str == null) {
                return null;
            }
    
            StringBuilder hyphens = new StringBuilder();
            StringBuilder result = new StringBuilder();
    
            for (int i = 0; i < n; i++) {
                if (str[i] == '-') {
                    hyphens.append('-');
                } else {
                    result.append(str[i]);
                }
            }
    
            return hyphens.append(result).toString();
        }
    }
     
