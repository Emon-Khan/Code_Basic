#include<iostream>
#include<string>
using namespace std;

class human{
    string name;
    int age;

public:
    human(string iname, int iage){
        name = iname;
        age = iage;
    }
    friend void display(human man);
};

void display(human man){
    cout<<man.name<<endl<<man.age<<endl;
}
int main(){
    human Emon("Emon", 21);
    display(Emon);

    return 0;
}


