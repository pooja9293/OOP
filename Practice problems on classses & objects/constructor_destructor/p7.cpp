#include<iostream>
#include<string>
using namespace std;

class A{
    A(){
        a=10;
        cout<<"Default constructor: "<<a<<endl;

    }
    A(const A $q){
        a=q.a;
        cout<<"Copy constructors : "<<a<<endl;
    }

    void set_a(int x){
        a=x;
    }
};
int main(){
    A obj;obj.set_a(11);
    A a1=obj;
    A a2(obj);
    return 0;
}
