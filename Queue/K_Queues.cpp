#include <iostream>
using namespace std;

class kQueue{
    public:
        int n;
        int k;
        int* front;
        int* rear;
        int* arr;
        int freeSpot;
        int* next;
        kQueue(int n, int k){
            this->n=n;
            this->k=k;
            front=new int[k];
            rear=new int[k];
            for(int i=0; i<k; i++){
                front[i]=-1;
                rear[i]=-1;
            }
            next=new int[n];
            for(int i=0; i<n; i++){
                next[i]=i+1;
            }
            next[n-1]=-1;
            arr=new int[n];
            freeSpot=0;
        }
        void enqueue(int data, int qn){
            //overflow
            if(freeSpot==-1){
                cout<<"No Empty Space is present"<<endl;
                return;
            }
            //find first free index
            int index=freeSpot;

            //update freeSpot
            freeSpot=next[index];

            //check whether 1st element
            if(front[qn-1]==-1) front[qn-1]=index;
            // link new element to previous element
            else next[rear[qn-1]]=index;

            //update next
            next[index]=-1;

            //update rear
            rear[qn-1] = index;
            //push element
            arr[index]=data;
        }
        int dequeue(int qn){
            //underflow
            if(front[qn-1]==-1){
                cout<<"Queue Underflow"<<endl;
                return -1;
            }
            //find index to pop
            int index=front[qn-1];
            //front ko aage badhao
            front[qn-1]=next[index];
            // free slots ko manage karo
            next[index]=freeSpot;
            freeSpot=index;
            return arr[index];
        }
};

int main(){
    kQueue q(10, 3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    cout<<q.dequeue(1)<<endl;
}