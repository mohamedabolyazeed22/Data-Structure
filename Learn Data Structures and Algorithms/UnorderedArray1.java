public class UnorderedArray1 {
    public static void insertByIndex(int[] arr, int value, int index) {

        if (index < 0 || index > arr.length) {

            System.out.println("Error: Index is out of range");
            
        }

        if (index == arr.length) {

            int[] newArr = new int[arr.length + 1];
            System.arraycopy(arr, 0, newArr, 0, arr.length);
            newArr[index] = value;
            arr = newArr;
        } else {

            int[] newArr = new int[arr.length + 1];
            System.arraycopy(arr, 0, newArr, 0, index);
            System.arraycopy(arr, index, newArr, index + 1, arr.length - index);
            newArr[index] = value;
            arr = newArr;
        }

        System.out.print("Array after insertion: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };
        insertByIndex(arr, 10,2);
    }
}
