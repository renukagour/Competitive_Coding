import java.util.Scanner;

public class AreaOfRightAngledTriangle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the base and height of the triangle
        System.out.print("Enter the base of the triangle: ");
        double base = scanner.nextDouble();
        
        System.out.print("Enter the height of the triangle: ");
        double height = scanner.nextDouble();
        
        // Calculate the area of the triangle
        double area = 0.5 * base * height;
        
        // Output the area
        System.out.println("The area of the right-angled triangle is: " + area);
        
        scanner.close();
    }
}
