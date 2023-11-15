#include<iostream>
using namespace std;
class myClass {
    int a;
    public:
    myClass(int x){
        a=x;
        cout<<"Destructor: "<<a<<endl;

    }
    ~myClass(){
        cout<<"Destructor: "<<a<<endl;

    }
};
int main(){
    myClass obj1(1),obj2(2),obj3(3);
    return 0;
}