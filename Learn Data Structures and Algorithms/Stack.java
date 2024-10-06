public class Stack {
    private static final int MAX_SIZE = 100;
    private int top;
    private int[] item;

    public Stack() {
        top = -1;
        item = new int[MAX_SIZE];
    }

    public void push(int element) {
        if (top >= MAX_SIZE - 1) {
            System.out.println("stack full on push");
        }
        top++;
        item[top] = element;
    }

    public boolean isEmpty() {
        return top < 0;
    }

    public void pop() {
        if (isEmpty()) {
            System.out.println("stack empty on pop");
        } else {
            top--;
        }
    }

    public void pop(int[] element) {
        if (isEmpty()) {
            System.out.println("stack empty on pop");
        } else {
            element[0] = item[top];
            top--;
        }
    }

    public void getTop(int[] stackTop) {
        if (isEmpty()) {
            System.out.println("stack empty on getTop");
        } else {
            stackTop[0] = item[top];
            System.out.println(stackTop[0]);
        }
    }

    public void print() {
        System.out.print("[");
        for (int i = top; i >= 0; i--) {
            System.out.print(item[i] + " ");
        }
        System.out.println("]");
    }

    public static void main(String[] args) {
        Stack s = new Stack();
        s.push(10);
        s.push(20);
        s.push(30);

        int poppedElement[] = new int[1];
        s.pop(poppedElement);
        System.out.println("Popped element: " + poppedElement[0]);

        int topElement[] = new int[1];
        s.getTop(topElement);
        System.out.println("Top element: " + topElement[0]);

        s.print();
    }
}
