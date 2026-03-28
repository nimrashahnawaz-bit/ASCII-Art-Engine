 # include<iostream>
using namespace std;
main()
{
    int s;
    cout <<"Enter the number of Elements: ";
    cin >> s;
    
    int n[s];
    int sum =0;
    cout <<"enter "<<s<<" numbers: "<<endl;
    for (int i =0; i<s; i++){
        cin >> n[i];
        sum = sum + n[i];
    }
    cout<<"Sum of all elements: "<<sum;
    }
    
