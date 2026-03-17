#include<iostream>
using namespace std;

main()
{
    cout <<"Enter first number: ";
    int n1;
    cin>>n1;

    cout <<"Enter second number: ";
    int n2;
    cin>>n2;

    int h;
    int l;
    
    int i = 1;
    while(i <=n1 && i <= n2){
        if(n1%i == 0 && n2%i == 0){
            h = i;
        }
        i = i+1;
    }
     l = n1*n2 / h;
     cout <<"GDF: "<<h<<endl;
     cout <<"LCM: "<<l;
}