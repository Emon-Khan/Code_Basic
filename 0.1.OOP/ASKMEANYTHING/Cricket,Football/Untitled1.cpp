#include<iostream>
#include<conio.h>

using namespace std;

class cricket{
public:
    cricket(int a, char b){
        cout<<"in cricket clss"<<endl;
    }
};

class football{
public:
    football(int c, char d){
        cout<<"in football class"<<endl;
    }
};

class badminton : public cricket, public football{
public:
    badminton(int e, char f) : cricket(e, f), football(e, f){
        cout<<"in badminton class"<<endl;
    }
};

int main(){
    badminton obj(1, 'E');
    getch();
    return 0;
}
