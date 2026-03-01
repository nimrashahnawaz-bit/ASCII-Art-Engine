#include<iostream>
using namespace std;

main()
{
    cout << "Enter voltage (in volts):";
    float volts;
    cin >> volts;

    cout << "Enter current (in amperes):";
    float amperes;
    cin >> amperes;
   
    
    float power;
    power = volts * amperes;
    cout << "The power is "<<power<<" watts";
}