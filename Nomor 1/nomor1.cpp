#include <iostream>
using namespace std;

#define MAX 1000 // Maximum size of the stack

class Stack {
    int top;

public:
    int arr[MAX]; // Array to store stack elements

    Stack() { top = -1; } // Constructor to initialize top

    // Function to push an element onto the stack
    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
            return false;
        }
        else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
            return true;
        }
    }

    // Function to pop an element from the stack
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return 0;
        }
        else {
            int x = arr[top--];
            return x;
        }
    }

    // Function to get the top element of the stack
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return 0;
        }
        else {
            int x = arr[top];
            return x;
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack stack;

    for(int i=0; i<10; i++){
        stack.push(i);
    }

    // stack.push(10);
    // stack.push(20);
    // stack.push(30);

    cout << stack.pop() << " popped from stack\n";

    cout << "Top element is: " << stack.peek() << endl;

    if (stack.isEmpty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }

    return 0;
}
