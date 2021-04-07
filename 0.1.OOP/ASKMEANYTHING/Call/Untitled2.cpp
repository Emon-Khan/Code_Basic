#include<iostream>
#include<conio.h>

using namespace std;

class phone{
public:
    virtual void callReceive(){}
};

class Landline : public phone{
public:
    void callReceive(){
        cout << "pick up" << endl;
    }
};

class Mobile : public phone{
public:
    void callReceive(){
        cout << "press receive" << endl;
    }
};

int main(){
    phone *p;
    phone obj1;
    p= &obj1;
    p->callReceive();
    Landline obj2;
    p= &obj2;
    p->callReceive();
    Mobile obj3;
    p= &obj3;
    p->callReceive();

    getch();
    return 0;
}
