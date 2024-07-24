import java.util.Scanner;

public class LowerToUpper {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // String ch=sc.next();
        // int i=0;
        // while(i<ch.length()){
        // System.out.println(Character.toUpperCase(ch.charAt(i)));
        // i++;

        // }


        // char lowerChar = sc.next().charAt(0);
      
        // if (lowerChar >= 'a' && lowerChar <= 'z') {
        
        //     char upperChar = (char) (lowerChar - 32);
        //     System.out.printf("The uppercase of '%c' is '%c'%n", lowerChar, upperChar);
        // } else {
        //     System.out.println("The character is not a lowercase letter.");
        // }

        String str= sc.next();
     
        StringBuilder result = new StringBuilder();

        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);

            // Check if the character is a lowercase letter
            if (c >= 'a' && c <= 'z') {
                // Convert to uppercase using bitwise AND with ~32
                c = (char) (c & ~32);
                
            }

            // Append the (possibly modified) character to the result
            result.append(c);
        }

        // Print the resulting string
        System.out.println("Converted string: " + result.toString());

       System.out.println(str.toString());

        sc.close();
    }

}
