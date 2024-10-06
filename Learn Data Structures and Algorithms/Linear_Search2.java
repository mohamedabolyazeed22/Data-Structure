public class Linear_Search2 {

    public static int countnum(int[] arr, int key) {
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (key == arr[i])
                count++;
        }
        return count;
    }

    public static void main(String[] args) {
        int[] arr = { 3, 2, 5, 2, 9, 8, 2, };
        int key = 2;
        System.out.println("index of key  = " + countnum(arr, key));
    }

}