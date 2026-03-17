#include <iostream>
using namespace std;
main()
{
    int v;
    cout << "Please enter a Positive Number: ";
    cin >> v;
    while (v <= 0)
    {                                                                          
        cout << "Error: " << v << " is not a Positive Number." << endl;
        cout << "Please enter a Positive Number: ";
        cin >> v;
    }
    cout << "Program Ends" << endl;
}
