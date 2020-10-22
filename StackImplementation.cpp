#include <iostream>
#define MAX 1000


class Stack {
    int top;

public:
    int a[MAX]{};

    Stack() { top = -1; }

    bool push(int x){
        if (top > (MAX-1)){
            printf("Stack Overflow");
            return true;
        } else{
            a[++top] = x;
            printf("%d added to the stack\n", x);
            return true;
        }
    };
    int pop(){
        if (top < 0){
            printf("Stack Underflow");
            return 0;
        } else{
            int x = a[top--];
            return x;
        }
    };
    int peek(){
        if (top < 0){
            printf("Stack Is Empty!");
            return 0;
        }
        else {
            int x = a[top];
            printf("%d", x);
            return x;
        }
    };
    bool isEmpty(){
        return top < 0;
    };
};

    int main(){
        class Stack s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.peek();
    }

