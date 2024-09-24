#include <iostream>
#define MAX 1000 
using namespace std;

class Stack {
    int top;

public:
    int arr[MAX];

    Stack() { top = -1; }

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

    int peek() {
        if (top < 0) {
            cout << "No Element in the Stack\n";
            return 0;
        }
        else {
            int x = arr[top];
            return x;
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack stack;

    for(int i=0; i<10; i++){
        stack.push(i);
    }
    for(int i=10; i>0; i--){
        cout << stack.pop() << " has been successfully Popped from the stack!\n";
        cout << "The current Top Element in Stack is: " << stack.peek() << endl;
    }

    if (stack.isEmpty()) {
        cout << "Stack is Currently Empty!\n";
    } else {
        cout << "Process Completed!\n";
    }

    return 0;
}
