#include <iostream>
#include <stack>
using namespace std;

void deleteMidElement(stack<int> &st, int count, int size){
    // Base Case
    if(count == size/2){
        st.pop();
        return;
    }
    int numOnTop = st.top();
    st.pop();

    //Recursive Call
    deleteMidElement(st, count+1, size);

    st.push(numOnTop);
}

void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int> st;
    st.push(5); st.push(9); st.push(12); st.push(8); st.push(4);
    int count=0,size=st.size();
    deleteMidElement(st, count, size);
    display(st);
}