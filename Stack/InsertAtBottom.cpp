#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int x){
    // base case
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    //recursive call
    solve(s, x);
    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack, x);
    return myStack;
}

void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int> st;
    st.push(5); st.push(9); st.push(2); st.push(1);
    pushAtBottom(st, 14);
    display(st);
}
