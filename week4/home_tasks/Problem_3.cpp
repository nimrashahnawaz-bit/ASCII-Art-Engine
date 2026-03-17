#include<iostream>
using namespace std;

main()
{
  cout << "Enter the temperature of City 1: ";
  int t1;
  cin >> t1;
  cout << "Enter the temperature of City 2: ";
  int t2;
  cin >> t2;
  
  if(t1 - t2 > 10){
    cout << "Difference is too big" <<endl;
  }
  cout << "Program Ends";
}