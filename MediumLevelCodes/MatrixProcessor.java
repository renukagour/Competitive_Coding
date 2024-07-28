import java.util.Arrays;
import java.util.Scanner;

public class MatrixProcessor {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the size of the matrix
        System.out.print("Enter the size of array: ");
        int size = scanner.nextInt();

        int[] evenArray = new int[(size + 1) / 2]; // ceil(size/2)
        int[] oddArray = new int[size / 2]; // floor(size/2)

        // Read the elements of the matrix
        for (int i = 0; i < size; i++) {
            System.out.print("Enter element at " + i + " index: ");
            int element = scanner.nextInt();
            if (i % 2 == 0) {
                evenArray[i / 2] = element;
            } else {
                oddArray[i / 2] = element;
            }
        }

        // Sort the even and odd arrays
        Arrays.sort(evenArray);
        Arrays.sort(oddArray);

        // Print sorted arrays
        System.out.print("Sorted even array: ");
        for (int num : evenArray) {
            System.out.print(num + " ");
        }
        System.out.println();

        System.out.print("Sorted odd array: ");
        for (int num : oddArray) {
            System.out.print(num + " ");
        }
        System.out.println();

        // Calculate the sum of the second largest numbers
        int secondLargestEven = evenArray.length > 1 ? evenArray[evenArray.length - 2] : Integer.MIN_VALUE;
        int secondLargestOdd = oddArray.length > 1 ? oddArray[oddArray.length - 2] : Integer.MIN_VALUE;
        int sum = (secondLargestEven != Integer.MIN_VALUE ? secondLargestEven : 0) +
                  (secondLargestOdd != Integer.MIN_VALUE ? secondLargestOdd : 0);

        // Print the sum
        System.out.println(sum);
        scanner.close();
    }
}
