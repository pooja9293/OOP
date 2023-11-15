#include<iostream>
using namespace std;
class myClass {
    public:
    char ch;
    int a,b;
    myClass(){
        a=0;b=0;ch='a';

    }
    myClass(char c){
        ch=c;
    }
    myClass(int x,int y){
        a=x;
        b=y;
    }
    void get(){
        cout<<a<<" "<<b<<" "<<ch<<endl;
    }

};
int main(){
    myClass ob1,ob2('Z'),ob3(4,8);
    ob1.get();
    ob2.get();
    ob3.get();
    return 0;
}