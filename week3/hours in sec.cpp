#include<iostream>
using namespace std;

main()
{
    cout << "Enter time in hours:";
    int hours;
    cin >> hours;

    int seconds;
    seconds = hours * 60;
    cout << ""<<hours<<" hours is equivalent to "<<seconds<<" seconds";
}
    
