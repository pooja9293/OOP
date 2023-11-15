#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"A";

    }
    A(int x){
        cout<<x;
    }
};
class B{
    A obj1;
    public:
    static A ob;
    B(){
        cout<<"B";
    }
};
A B::ob;
int main(){
    B obj1;
    B obj2;
    return 0;
}