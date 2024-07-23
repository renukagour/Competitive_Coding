
import java.util.*;

public class Remainder {
        public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k=sc.nextInt();
        int div = n%k;
        int rem = n/k;

        System.out.println(div + " " + rem);

    }
}
