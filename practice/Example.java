import java.util.HashMap;

public class Example {
    public static void main(String[] args) {
        int[] arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < arr.length; i++) {
            // Check if the current element is already in the map
            if (map.containsKey(arr[i])) {
                // If it is, increment its count
                map.put(arr[i], map.get(arr[i]) + 1);
            } else {
                // If it is not, add it to the map with a count of 1
                map.put(arr[i], 1);
            }
        }

        // Print the contents of the map
        for (Integer key : map.keySet()) {
            System.out.println("Element " + key + " occurs " + map.get(key) + " times.");
        }
    }
}
