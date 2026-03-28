# include<iostream>
using namespace std;
main()
{
    int n;
    cout <<"Enter the number of resistors in series circuit: ";
    cin >> n;
    
    int r[n];
    float sum =0;
    cout <<"enter the resistance values(ohm) of "<<n<<" resistors: "<<endl;
    for (int i = 0; i<n; i++){
        cin >> r[i];
        sum = sum + r[i];
    }
    cout<<"The total resistance of series circuit is: "<<sum;
    }
    
