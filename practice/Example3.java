import java.util.HashMap;
import java.util.Map;

public class Example3{
    public static void main(String[] args) {
        // Create and populate the HashMap
        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(1, 10);
        map.put(2, 20);
        map.put(3, 30);

        // Iterate over the entries and multiply key by value
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            int key = entry.getKey();
            int value = entry.getValue();
            int result = key * value;
            System.out.println("Key: " + key + ", Value: " + value + ", Key * Value: " + result);
        }
    }
}
