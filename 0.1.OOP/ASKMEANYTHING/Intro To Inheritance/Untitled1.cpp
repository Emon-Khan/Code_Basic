#include<iostream>
#include<conio.h>
using namespace std;
class Box{
public:
    int l, w, h;
    Box(){
        cout<<"Enter values: "<<endl;
        cin>>l;
        cin>>w;
        cin>>h;
    }
};

class Area : public Box{
public:
    int vol;
    int volume(){
        vol = l*w*h;
        cout<<vol<<endl;
    }
};
int main(){
    Area obj;
    obj.volume();
    getch();
    return 0;
}
