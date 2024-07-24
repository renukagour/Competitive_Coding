import java.util.Scanner;

public class AreaUsingHeronFormula {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the lengths of the sides of the triangle
        System.out.print("Enter the length of side a: ");
        double a = scanner.nextDouble();
        
        System.out.print("Enter the length of side b: ");
        double b = scanner.nextDouble();
        
        System.out.print("Enter the length of side c: ");
        double c = scanner.nextDouble();
        
        // Calculate the semi-perimeter of the triangle
        double s = (a + b + c) / 2;
        
        // Calculate the area using Heron's formula
        double area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
        
        // Output the area
        System.out.println("The area of the triangle using Heron's formula is: " + area);
        
        scanner.close();
    }
}
