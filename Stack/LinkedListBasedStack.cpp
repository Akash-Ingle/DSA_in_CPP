// Implementing Stack using Linked List
#include <iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};

class mystack{
    Node* head;
    int stacksize;
    public:
    mystack(){
        head = NULL;
        stacksize=0;
    }
    void push(int g){
        Node* temp = new Node();
        temp->val = g;
        temp->next = head;
        head = temp;
        cout<<"Element "<<g<<" pushed into the stack!"<<endl;
        stacksize++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty cannot pop an element!"<<endl;
            return;
        }
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        cout<<"Element popped!"<<endl;
        stacksize--;
    }
    int top(){
        if(head == NULL){
            cout<<"NO top element , stack is empty!"<<endl;
            return -1;
        }
        cout<<"Top element is: "<<head->val<<endl;
        return head->val;
    }
    int size(){
        cout<<"Size of stack is: "<<stacksize<<endl;
        return stacksize;
    }
    int empty(){
        if(head==NULL){
            cout<<"Stack is empty!"<<endl;
            return 1;
        }
        cout<<"Stack is not empty"<<endl;
        return 0;
    }
};

int main(){
    mystack s1;
    s1.empty();
    s1.push(7); s1.push(9);
    s1.pop();
    s1.push(10);
    s1.top();
    s1.size();
    s1.empty();
    return 0;
}