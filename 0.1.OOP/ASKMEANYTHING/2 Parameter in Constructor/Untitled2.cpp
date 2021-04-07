#include<iostream>
#include<conio.h>
using namespace std;

class myclass{
public:
    int a, b;
    myclass(int a, int b){
        cout<< a << '\n'<< b <<endl;
    }
};
int main(){
    myclass obj(10, 30);
    return 0;

}

