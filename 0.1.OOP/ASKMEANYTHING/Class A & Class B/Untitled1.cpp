#include<iostream>
#include<conio.h>

using namespace std;

class B{
public:
    B(int a, char b){
        cout << "in oop class" <<endl;
    }
};

class A : public B{
public:
    A(int c, char d): B(c, d){
        cout << "in oop class" <<endl;
    }
};

int main(){
    A obj1(1, 'B');
    getch();
    return 0;
}
