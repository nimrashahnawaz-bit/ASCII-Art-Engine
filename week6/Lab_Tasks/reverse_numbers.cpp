# include<iostream>
using namespace std;
main()
{
    int n;
    cout <<"Enter the number of Elements: ";
    cin >>n;
    int e[n];

    if(n<0){
        cout<<"Invalid input";
    }
    cout << "Enter  number: "<<endl;
    for(int j=0; j<n; j++){
    cin >> e[j];
    }
     cout<<"Numbers in reversed order: ";
    for(int i=n-1; i>=0; i--){
     cout << e[i]<<" ";
    }
}