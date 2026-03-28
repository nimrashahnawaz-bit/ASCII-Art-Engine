# include<iostream>
using namespace std;
main()
{
    int n;
    cout <<"Enter numbers you want to display: ";
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cout <<"Enter "<<i+1<<"st number: ";
        cin>> num[i];
    }
     for(int i=0; i<n; i++){
        cout <<"The "<<i+1<<"st Element in array is : "<<num[i]<<endl;
    }
}