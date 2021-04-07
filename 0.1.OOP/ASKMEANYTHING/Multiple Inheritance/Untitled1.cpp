#include<iostream>
#include<conio.h>
using namespace std;

class office{
public:
    int table;
};
class home{
public:
    int bed;
};
class house : public office, public home{
public:
    int door, window;
};

int main(){
    house obj;
    obj.door = 1;
    obj.window = 2;
    obj.bed = 3;
    obj.table = 4;
    cout<<"Door: "<<obj.door<<endl;
    cout<<"Window: "<<obj.window<<endl;
    cout<<"Bed: "<<obj.bed<<endl;
    cout<<"Table: "<<obj.table<<endl;
    getch();
    return 0;
}

