import java.util.*;

class MaxOccuElementSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<Integer, Integer> map = new HashMap<>();
        
        System.out.println("Enter the size of the array:");
        int n = sc.nextInt();
        
        System.out.println("Enter the array:");
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        
        // Count occurrences of each integer
        for (int i = 0; i < n; i++) {
            if (map.containsKey(arr[i])) {
                map.put(arr[i], map.get(arr[i]) + 1);
            } else {
                map.put(arr[i], 1);
            }
        }
        
        // Find the integer with the maximum occurrences
        int maxCount = 0;
        int maxElement = arr[0];
        
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() > maxCount) {
                maxCount = entry.getValue();
                maxElement = entry.getKey();
            }
        }
        
        // Calculate the sum of the max occurring element
        int maxElementSum = maxElement * maxCount;
        
        System.out.println("Element with the maximum occurrences: " + maxElement);
        System.out.println("Sum of the element with maximum occurrences: " + maxElementSum);
        sc.close();
}
}
