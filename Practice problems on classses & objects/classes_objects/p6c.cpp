#include<iostream>
using namespace std;
class A{
    const int a;
    int b;
    public:
        A(int x, int y): a(x){
            b=y;
        }
        void inc() const{
            b++;
        }
};

int main(){
    A obj(2,4);
    obj.inc();
    return 0;
}