public class UnorderedArray2 {
    public static void deleteByIndex(int[] arr, int index) {

        if (index < 0 || index >= arr.length) {
            System.out.println("Error: Index is out of range");
            return;
        }

        for (int i = index; i < arr.length - 1; i++) {
            arr[i] = arr[i + 1];
        }

        int[] newArr = new int[arr.length - 1];
        System.arraycopy(arr, 0, newArr, 0, newArr.length);

        System.out.print("Array after deletion: ");
        for (int num : newArr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };
        deleteByIndex(arr, 4);
    }
}
