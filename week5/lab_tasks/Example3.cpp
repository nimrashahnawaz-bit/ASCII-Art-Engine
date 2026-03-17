#include <iostream>
using namespace std;
main()
{
    int n1 = 0, n2 = 1, next;
    int n;
    cout << "How many numbers of Fibonacci Series you want to print: ";
    cin >> n; 

    cout << n1 << ", "<< n2;
    for(int i = 1; i < n - 1; i = i + 1)
    {
        next = n1 + n2;
        cout << ", " << next;
        n1 = n2;
        n2 = next;
    }
}
