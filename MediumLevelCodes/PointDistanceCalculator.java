public class PointDistanceCalculator {
    public static void main(String[] args) {
        // Define the coordinates of the three points
        int x1 = 1, y1 = 1;
        int x2 = 2, y2 = 4;
        int x3 = 3, y3 = 6;

        // Calculate the distances between each pair of points
        double distance1 = calculateDistance(x1, y1, x2, y2);
        double distance2 = calculateDistance(x2, y2, x3, y3);
        double distance3 = calculateDistance(x1, y1, x3, y3);

        // Calculate the sum of distances
        double totalDistance = distance1 + distance2 + distance3;

        // Print the total distance
        System.out.printf("Total Distance: %.2f\n", totalDistance);
    }

    // Method to calculate the distance between two points (x1, y1) and (x2, y2)
    public static double calculateDistance(int x1, int y1, int x2, int y2) {
        return Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));
    }
}
