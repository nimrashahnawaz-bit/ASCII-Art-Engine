#include<iostream>
using namespace std;

main()
{
    cout << "Enter  speed: ";
    float s;
    cin >> s;

    if (s <= 10 ){
        cout << "Slow";
    }
    else if (s <= 50){
        cout << "Average";
    }
    else if (s <= 150){
        cout <<"Fast";
    }
    else if (s <= 1000){
        cout <<"Ultra Fast";
    }
    else if (s > 1000){
        cout <<"Extremely Fast";
    }
}