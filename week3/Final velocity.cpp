#include <iostream>
using namespace std;

main ()
{
cout << "Enter Initial Velocity (m/s): ";
int initial;
cin >> initial;

cout << " Enter Acceleration (m/s^2): " ;
int acc;
cin >> acc;

cout << " Enter Time (s): " ;
int time;
cin >> time;


int final;
final = acc*time + initial ;

cout << "Final Velocity (m/s) = "<<final;
}