#include<iostream>
using namespace std;

main()
{
cout << " Enter the size of the fertilizer bag in pounds: " ;
int size;
cin >> size;

cout << " Enter cost of the bag: $" ;
int cost;
cin >> cost;

cout << " Enter the area in square feet that can be covered by the bag: " ;
int area;
cin >> area;

float formula;
formula = cost / size ;

float costperfoot;
costperfoot = cost / area;


cout << "Cost of the fertilizer per pound: $"<<formula<<endl ;
cout << "Cost of fertilizing per square foot is: $"<<costperfoot;
 }