public class Linear_Search1 {

    public static String LinearSearch(int[] arr, int key) {
        for (int i = 0; i < arr.length; i++) {
            if (key == arr[i])
                return "Found ";
        }
        return "Not Found";
    }

    public static void main(String[] args) {
        int[] arr = { 3, 4, 5, 6, 7, 8, };
        int key = 8;

        System.out.println("index of key = " + LinearSearch(arr, key));
    }
}
