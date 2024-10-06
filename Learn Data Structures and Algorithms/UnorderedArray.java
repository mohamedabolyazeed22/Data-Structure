// find() --> o(n)
// insert() --> o(1)
// delete() --> o(n)
// display() --> o(n)

public class UnorderedArray {
    private long[] a;
    private int nElems;

    public UnorderedArray(int n) {
        a = new long[n];
        nElems = 0;
    }

    public int find(long value) {
        for (int i = 0; i < nElems; i++) {
            if (a[i] == value)
                return i;
        }
        return -1;
    }

    public boolean insert(long value) {
        if (nElems == a.length)
            return false;
        else {
            a[nElems++] = value;
            return true;
        }
    }

    public boolean delete(long value) {
        if (nElems == 0)
            return false;
        else {
            int n = find(value);
            for (int i = n + 1; i < nElems; i++) {
                a[i - 1] = a[i];
            }
            nElems--;
            return true;
        }
    }

    public void display() {
        System.out.print("Array : ");
        for (int i = 0; i < nElems; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println("");
    }

    // This is The Answer , Please think before typing
    public boolean insertByIndex(int ind, long value) {

        if (nElems == a.length) // if array is full
            return false;
        else if (ind >= a.length || ind < 0) // ind is outer
            return false;
        else {
            nElems++;
            for (int i = nElems; i >= ind; i--) {
                a[i] = a[i - 1];
            }
            a[ind] = value;
            return true;
        }
    }

    public boolean deleteByIndex(int ind) {
        if (ind >= a.length || ind < 0)
            return false;
        else {
            for (int i = ind; i < nElems - 1; i++) {
                a[i] = a[i + 1];
            }
            a[nElems - 1] = 0;
            nElems--;
            return true;
        }
    }

}

class UnorderedArrayApp {
    public static void main(String[] args) {
        UnorderedArray ua = new UnorderedArray(7);
        ua.insert(3);
        ua.insert(5);
        ua.insert(8);
        ua.insert(4);
        ua.insert(11);
        ua.insert(33);
        ua.insert(1);
        ua.display();
        ua.delete(5);
        ua.display();
        ua.delete(1);
        ua.delete(33);
        ua.display();
        int v = ua.find(33);
        if (v == -1)
            System.out.println("Not Found !");
        else
            System.out.println("Founded");
        v = ua.find(11);
        if (v == -1)
            System.out.println("Not Found !");
        else
            System.out.println("Founded");

    }
}
