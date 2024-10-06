public class OrderedArray {

    private long[] a;
    private int nElems;

    public OrderedArray(int n) {
        a = new long[n];
        nElems = 0;
    }

    public int find(long value) {
        int lower = 0;
        int upper = nElems - 1;

        while (true) {
            int mid = (lower + upper) / 2;
            if (value == a[mid])
                return mid;
            else if (lower > upper)
                return -1;
            else {
                if (value > a[mid])
                    lower = mid + 1;
                else
                    upper = mid - 1;
            }
        }
    }

    public boolean insert(long value) {
        if (nElems == a.length)
            return false;
        int i;
        for (i = 0; i < nElems; i++) {
            if (a[i] > value)
                break;
        }
        for (int j = nElems; j > i; j--) {
            a[j] = a[j - 1];
        }
        a[i] = value;
        nElems++;
        return true;
    }

    public boolean delete(long value) {
        if (nElems == 0)
            return false;
        int v = find(value);
        if (v == -1)
            return false;
        else {
            for (int i = v; i < nElems - 1; i++)
                a[i] = a[i + 1];
        }
        nElems--;
        return true;

    }

    public void display() {
        System.out.print("Array: ");
        for (int i = 0; i < nElems; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        OrderedArray oa = new OrderedArray(6);
        oa.insert(6);
        oa.insert(5);
        oa.insert(4);
        oa.insert(3);
        oa.insert(2);
        oa.insert(1);
        oa.display();
        oa.delete(4);
        oa.delete(5);
        oa.display();

        int v = oa.find(6);
        System.out.println("v: " + v);
    }
}
