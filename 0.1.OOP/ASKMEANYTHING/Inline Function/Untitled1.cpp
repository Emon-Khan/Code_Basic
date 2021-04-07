#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
public:

inline float mul(float x,float y){
    return(x*y);
}
inline float cube(float x){
    return(x*x*x);
}
};

int main(){

    myclass obj;
    float a,b;
    cout << "Enter two number : ";
    cin >> a >> b;
    cout<<"Multiplication value is: ";
    cout<< obj.mul(a,b)<< endl;
    cout<<"Cube value of first number is: ";
    cout<<obj.cube(a)<< endl;
    cout<<"cube value of second number :";
    cout << obj.cube(b);
    getch();
}
