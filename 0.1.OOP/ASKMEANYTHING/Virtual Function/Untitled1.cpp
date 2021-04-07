#include<iostream>
#include<conio.h>

using namespace std;

class Base{
public:
    int x,y;
    Base(int i,int j){
        x=i;
        y=j;
    }
    virtual void fun(){
        cout<<x<<endl<<y<<endl;
    }
};
class Derived : public Base{
public:
    Derived(int c,int d): Base(c,d){}
    void fun(){
        cout <<x<<endl<<y;
    }
};

int main(){
    Base *P;
    //Base obj2(7,8);
    Derived obj1(10,5);
    //P = &obj2;
    //P->fun();
    P = &obj1;
    P->fun();
    getch();
    return 0;
}

