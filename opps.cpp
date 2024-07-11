#include<bits/stdc++.h>
using namespace std;

// class A{
//     public:
//     virtual void fun(){
//         cout<<"Base class is this";
//     }
// };
// class B:public A{
//     public:
//     void fun(){
//         cout<<"Derived class is this";
//     }
// };


class A{
    public : virtual void show()=0;
};

class B: public A{
    public:
    void show(){
        cout<<"Derived Class is derived from Base Class";
    }
};


int main(){
    A *a; B b;
    a=&b;
    a->show();    
    return 0;
}