#include <iostream>
#include <String>
using namespace std;

const int MAX_SIZE = 100;
template <class t>
class stack {
    t top;
    t item[MAX_SIZE];
public:
    stack() {
        top = -1;
    }

    void push(t Element) {
        if (top >= MAX_SIZE - 1) {
            cout << "stack full on push";
        }
        top++;
        item[top] = Element;
    }

    bool isEmpty() {
        return top < 0;
    }

    void pop() {
        if (isEmpty())
            cout << "stack empty on pop";
        else
            top--;
    }

    void pop(int& Element) {
        if (isEmpty())
            cout << "stack empty on pop";
        else {
            Element = item[top];
            top--;
        }
    }

    void getTop(int& stackTop) {
        if (isEmpty())
            cout << "stack empty on getTop";
        else {
            stackTop = item[top];
            cout << stackTop << endl; 
        }
    }

    void print() {
    cout << "[";
    for (t i = top; i >= 0; i--) { 
        cout << item[i] << " ";
    }
    cout << "]" << endl;
}

};

int main() {
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
 int poppedElement;
    s.pop(poppedElement);
    cout << "Popped element: " << poppedElement << endl;

    int topElement;
    s.getTop(topElement);
    cout << "Top element: " << topElement << endl;

    s.print();

    return 0;
   
}
