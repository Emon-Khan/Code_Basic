#include<iostream>
#include<conio.h>

using namespace std;

class base{
public:
    virtual void void_print(){
        cout<<"in the base class"<<endl;
    }
};

class derived1: public base{
public:
    void void_print(){
        cout<<"in the derived1 class"<<endl;
    }
};

class derived2: public base{
public:
    void void_print(){
        cout<<"in the derived2 class"<<endl;
    }
};

int main(){
    base *p;
    base obj1;
    p=&obj1;
    p->void_print();
    derived1 obj2;
    p=&obj2;
    p->void_print();
    derived2 obj3;
    p=&obj3;
    p->void_print();
    getch();
    return 0;
}
