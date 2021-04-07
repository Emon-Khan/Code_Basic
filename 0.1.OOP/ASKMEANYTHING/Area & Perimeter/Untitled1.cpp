#include<iostream>
#include<conio.h>

using namespace std;

class input{
public:
    int length,width;
    input(int i,int j){
        length=i;
        width=j;
    }
    virtual void area(){
        cout<<" ";
    }
    virtual void perimeter(){
        cout<<" ";
    }
};

class square : public input{
public:
    square(int i,int j) : input(i,j){}
    void area(){
        cout<<length*width<<endl;
    }
    void perimeter(){
        cout<<2*(length+width)<<endl;
    }
};
class triangle : public input{
public:
    triangle(int i,int j) : input(i,j){}
    void area(){
        cout<<0.5*length*width<<endl;
    }
    void perimeter(){
        cout<<3*width<<endl;
    }
};


int main(){
    input *P;
    square obj1(10,5);
    P = &obj1;
    P->area();
    P->perimeter();
    triangle obj2(1,3);
    P = &obj2;
    P->area();
    P->perimeter();
    getch();
    return 0;
}

