#include <iostream>
using namespace std;

main()
{
    int pin;
    int choice;
    int balance = 7325500;
    int deposit;
    int withdraw;


    for(int i = 1; i <= 3; i++)
    {
        cout <<"Enter ATM PIN: ";
        cin>>pin;
        if(pin == 5678){
            cout<<"Login Successful"<<endl;
            break;
        }
        else{
            cout <<"Wrong PIN"<<endl;
        }
        if (i == 3 && pin != 1234){
            cout <<"Too many attempts. Card Blocked"<<endl;
            return 0;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        cout<<"---------- ATM MENU ----------"<<endl;
        cout<<"1. Check DEposit"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        if(choice == 1){
            cout<<"Current Balance: "<<balance<<endl;
        }
        if(choice == 2){
            cout<<"Enter amount to Deposit: ";
            cin>>deposit;
            balance = balance + deposit;
            cout<<"Amount Deposited Successfully"<<endl;
        }
        if(choice == 3){
            cout<<"Enter Amount to withdraw: ";
            cin>>withdraw;
            if(balance > withdraw){
            balance = balance - withdraw; 
            cout <<"Please collect your cash"<<endl;
            }
            else{
                cout <<"Insufficient Balance"<<endl;
            }
        }
        if(choice == 4){
            cout<<"Thank you for using ATM";
            break;
        }
    }

}