#include <bits/stdc++.h>

using namespace std;

/*
 * Stack as ADT
 *
 * main operations:
 * top()
 * push()
 * pop()
 * isEmpty()
 */

const int N = 200; // Max size
template<class t>
class Stack{
    int top;
    t stk[N];
public:
    Stack(): top(-1){}

    void push(t val){
        if(top >= N-1){
            cout << "NO Space in Stack!\n";
        }
        else stk[++top] = val;
    }

    bool isEmpty(){
        return top == -1;
    }

    void pop(){
        if(!isEmpty()) top--;
        else cout << "NO Elements to POP!\n";
    }

    int getTop(){
        if(!isEmpty()) return stk[top];
        else{
            cout << "NO Elements in TOP!\n";
            return -1;
        }
    }

    void print(){
        int idx = top;
        cout << '\n';
        if(!isEmpty()){
            while (idx >= 0) {
                cout << "| " << stk[idx--] << " |\n";
                cout << "------\n";
            }
        }
    }
};

int main() {
    // you can make it string, char => Stack<string> stk;
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.print();

    s.pop();
    s.print();
    /*
     *  40
     *  30
     *  20
     *  10
     *
     *  after pop
     *
     *  30
     *  20
     *  10
     */
    return 0;
}