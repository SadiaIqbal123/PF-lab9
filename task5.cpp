#include<iostream>
using namespace std;
int main()
{
    int menu;
    cout<<"1 for deposit"<<endl;
    cout<<"2 for withdraw"<<endl;
    cout<<"3 for balance"<<endl;
    cout<<"4 for exit"<<endl;

    cout<<"enter the menu:"<<endl;
    cin>>menu;
    int checkbalance=10000;
    int withdraw;
    switch(menu)
    {
        case 1:
        cout<<"deposite";
        break;
        case 2:
        cout<<"withdraw"<<endl;
        cout<<"enter withdraw amount"<<endl;
        cin>>withdraw;
        if(withdraw<=checkbalance){
            int total;
            total=checkbalance-withdraw;
            cout<<"remaning amout is:"<<total;
        }
        else{
            cout<<"amount is invalid";
        }
        break;
        case 3:
        cout<<"checkbalance:"<<checkbalance;
        break;
        case 4:
        cout<<"exit";
        break;

    }
}