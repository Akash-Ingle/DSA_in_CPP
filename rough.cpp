#include <iostream>
using namespace std;

class A
{
public:
    virtual void fun()
    {
        cout << "base ";
    }
};
class B : public A
{
public:
    void fun()
    {
        cout << "derived ";
    }
};
int main()
{
    A *a = new B;
    a->fun();

    return 0;
}

// class complex
// {
// private:
//     float r, i;

// public:
//     complex(float r, float i)
//     {
//         this->r = r;
//         this->i = i;
//     }
//     complex() {}
//     void displaydata()
//     {
//         cout << "real part = " << r << endl;
//         cout << "imaginary part = " << i << endl;
//     }
//     complex operator+(complex c)
//     {
//         return complex(r + c.r, i + c.i);
//     }
// };
// int main()
// {
//     complex a(2, 3);
//     complex b(3, 4);
//     complex c = a + b;
//     c.displaydata();
//     return 0;
// }