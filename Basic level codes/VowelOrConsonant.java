import java.util.Scanner;

public class VowelOrConsonant {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input a character from the user
        System.out.print("Enter a character: ");
        char character = scanner.next().charAt(0);

        // Check if the character is a letter
        if (Character.isLetter(character)) {
            // Convert character to lowercase for simplicity
            char lowerCaseChar = Character.toLowerCase(character);

            // Check if the character is a vowel
            if (lowerCaseChar == 'a' || lowerCaseChar == 'e' || lowerCaseChar == 'i' || lowerCaseChar == 'o' || lowerCaseChar == 'u') {
                System.out.printf("The character '%c' is a vowel.%n", character);
            } else {
                System.out.printf("The character '%c' is a consonant.%n", character);
            }
        } else {
            System.out.printf("The character '%c' is not a letter.%n", character);
        }
        
        scanner.close();
    }

//     int i=0,count=0;
//   char c;
//   cin>>str;
//   while(str[i]!='\0'){
//   	c=str[i] |32; //count capital vowels also
//     if(c=='a' || c=='o'||c=='e'|| c=='i'|| c=='u' ){
//         count++;
//     }
    
// str[i]=str[i]^32; // convert to uppercase to lowercase & lower to upper
// str[i]=str[i] | 32; //convert all to lower
//  str[i]=str[i] & (~32); //convert all to upper
 
//      i++;
//   }
//   cout<<count;
//   cout<<str;
}
