#include <iostream>
using namespace std;

// function overloading 
class ApnaCollege{
    public:
        void fun(){
            cout<<"I am a function with no arguments"<<endl;
        }
        void fun(int x){
            cout<<"I am a function with int argument"<<endl;
        }
        void fun(double x){
            cout<<"I am a function with double argument"<<endl;
        }
};

int main(){
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    return 0;

}