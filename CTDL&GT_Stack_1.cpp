#include <iostream>
using namespace std;

class Stack {
    private:
        int* arr;
        int size;
        int top;

    public:
        Stack(int n) {
            size = n;
            arr = new int[size];
            top = -1;
        }

        ~Stack() {
            delete[] arr;
        }

        bool isFull() {
            return top == size - 1;
        }

        bool isEmpty() {
            return top == -1;
        }

        void push(int x) {
            if (isFull()) {
                cout << "Stack is full. Can not push more elements." << endl;
                return;
            }
            arr[++top] = x;
        }

        int pop() {
            if (isEmpty()) {
                cout << "Stack is empty. Can not pop more elements." << endl;
                return -1;
            }
            return arr[top--];
        }

        int peek() {
            if (isEmpty()) {
                cout << "Stack is empty. Can not peek." << endl;
                return -1;
            }
            return arr[top];
        }

        void display() {
            cout << "Stack: ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
};

int main() {
    int n = 5;
    Stack s(n);
    s.push(1);
    s.push(2);
    s.push(3);
    s.display(); // Output: Stack: 3 2 1
    cout << s.pop() << " has been popped from the stack." << endl; // Output: 3 has been popped from the stack.
    cout << "Top element in the stack is: " << s.peek() << endl; // Output: Top element in the stack is: 2
    s.display(); // Output: Stack: 2 1
    s.push(4);
    s.push(5);
    s.display(); // Output: Stack: 5 4 2 1
    s.push(6); // Output: Stack is full. Can not push more elements.
    return 0;
}
//chatgpt code đã chạy đc trên w3sch.. sau sửa lloi
