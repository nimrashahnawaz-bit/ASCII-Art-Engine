#include<iostream>
using namespace std;

main()
{
    cout <<"Holidays: ";
    int h;
    cin>>h;

    int w_days = 365-h;
    int time = w_days * 63 + h*127;
    int diff = 30000 - time;

    int hour = diff/ 60;
    int min = diff % 60;

    if(diff < 0){
        hour = hour * -1;
        min = min * -1;
    }

    if(diff >= 0){
        cout <<"Tom sleeps well"<<endl;
        cout <<hour<<" hours and "<<min<<" minutes less for play";
    }
    else{
    cout << "Tom will run away"<<endl;
    cout <<hour<<" hours and "<<min<<" minutes for play";  
    }
}