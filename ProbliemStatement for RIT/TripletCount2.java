import java.util.HashSet;

public class TripletCount2 {
    public static int countTriplet(int[] arr, int n) {
        HashSet<Integer> set = new HashSet<>();
        for (int num : arr) {
            set.add(num*num);
        }
        
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum =arr[i] + arr[j];
                if (set.contains(sum) ) {
                    // && sum != arr[i] && sum != arr[j]
                    count++;
                }
            }
        }
        
        return count;
    }

    public static void main(String[] args) {
        int[] arr1 = {1, 5, 3, 2};
        int n1 = arr1.length;
        System.out.println("Number of triplets: " + countTriplet(arr1, n1));
        int[] arr2 = {2, 3, 4};
        int n2 = arr2.length;
        System.out.println("Number of triplets: " + countTriplet(arr2, n2)); 
    }
}
