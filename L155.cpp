// Leatcode: 155. Min Stack
// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */

    stack<int> s;
    stack<int> minStack;

    MinStack() {
        minStack.push(INT_MAX);
    }

    void push(int val) {
        s.push(val);
        minStack.push(min(minStack.top(), val));
    }
    
    int pop() {
        // return popped element
        int x = s.top();
        s.pop();
        minStack.pop();
        return x;

    }
    int top() {
        return s.top();      
    }
    
    int getMin() {
        return minStack.top();
    }
};


int main(){
    MinStack* obj;
    obj->push(1);
    obj->push(2);
    obj->push(3);
    obj->push(4);

    cout << obj->top() << endl;
    cout << obj->getMin() << endl;
    obj->pop();
    cout << obj->top() << endl;
    cout << obj->getMin() << endl;
    obj->pop();
    cout << obj->top() << endl;
    cout << obj->getMin() << endl;


    

    return 0;
}