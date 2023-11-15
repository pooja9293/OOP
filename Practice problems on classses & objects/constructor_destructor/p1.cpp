#include<iostream>
using namespace std;
class myClass {
    char ch;
    int a,b;
    myClass(){
        cout<<"Default constructor"<<endl;

    }
};
int main(){
    myClass obj;
    return 0;
    
}