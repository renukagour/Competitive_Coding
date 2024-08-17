// Java code to illustrate the get() method 
import java.util.*; 

public class Example1 { 
	public static void main(String[] args) 
	{ 

		// Creating an empty HashMap 
		HashMap<Integer, String> hash_map = new HashMap<Integer, String>(); 

		// Mapping string values to int keys 
		hash_map.put(10, "Geeks"); 
		hash_map.put(15, "4"); 
		hash_map.put(20, "Geeks"); 
		hash_map.put(25, "Welcomes"); 
		hash_map.put(30, "You"); 

		// Displaying the HashMap 
		System.out.println("Initial Mappings are: " + hash_map); 

        hash_map.put(25,"wel");
		// Getting the value of 25 
		System.out.println("The Value is: " + hash_map.get(25)); 

		// Getting the value of 10 
		System.out.println("The Value is: " + hash_map.get(10)); 
	} 
} 
