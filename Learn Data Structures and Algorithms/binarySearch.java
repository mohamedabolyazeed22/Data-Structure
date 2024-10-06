public class binarySearch {

    public static int binarySearch(int[] arr, int key) {
        int lower = 0;
        int upper = arr.length - 1;
        int index = 0;

        while (true) {
            index = (lower + upper) / 2;
            if (key == arr[index])
                return index;
            else if (lower > upper)
                return -1;
            else if (key > arr[index])
                lower = index + 1;
            else if (key < arr[index])
                upper = index - 1;
        }
    }

    public static void main(String[] args) {

        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int SearchKey = 5;
        System.out.println(binarySearch(arr, SearchKey));
    }
}
