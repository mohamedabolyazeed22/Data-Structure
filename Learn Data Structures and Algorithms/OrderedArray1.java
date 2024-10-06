public class OrderedArray1 {

    public static double getAverage(int[] arr) {
        if (arr == null || arr.length == 0) {
            System.out.println("Error: Array is empty or null");
            return 0.0;
        }

        double sum = 0;
        for (int num : arr) {
            sum += num;
        }

        return sum / arr.length;
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };
        double average = getAverage(arr);
        System.out.println("Average: " + average);
    }
}
