#include<iostream>
using namespace std;

main()
{
    cout << "Enter size in megabytes (MB): ";
    int megabytes;
    cin >> megabytes;
    
   int KB;
   int bytes;
   int bits;
   bits = megabytes * 1024 * 1024 * 8 ;
   cout << "The "<<megabytes<<" (MB) is equivalent to "<<bits<<" bits";
}
    
