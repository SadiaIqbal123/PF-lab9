#include<iostream>
using namespace std;
int main()
{
    int colour;
    int R=1;
    cout<<"R for Red"<<endl;
    int G=2;
    cout<<"G for Green"<<endl;
    int Y=3;
    cout<<"Y for Yellow"<<endl;
    cout<<"enter a colour:"<<endl;
    cin>>colour;
    switch(colour){
        case 1:
        cout<<"stop";
        break;
         case 2:
        cout<<"GO";
        break;
         case 3:
        cout<<"Slow down";
        break;
    }

}