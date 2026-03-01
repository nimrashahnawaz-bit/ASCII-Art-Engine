#include<iostream>
using namespace std;

main()
{
cout << " Enter the name of the person: " ;
string n;
cin >> n;

cout << " Enter the target weight loss in kg: " ;
int kg;
cin >> kg;

int formula;
formula = kg * 15;

cout << ""<<n<<" will need "<<formula<<" to lose "<<kg<<" kg of weight by following the doctor's suggestions" ;
}