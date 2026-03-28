# include<iostream>
using namespace std;
main()
{
    int n;
    cout <<"Enter the number of Elements: ";
    cin >>n;
    int e[n];
    int largest = 0;
    cout <<"Enter "<<n<<" numbers, one per line:"<<endl;
    for (int i =0; i<n; i++){
        cin >> e[i];
    }
    for(int j=0; j<n; j++){
        if(e[j] > largest){
         largest = e[j];
        }
    }
    
    cout<<"The largest number entered is: "<<largest;
}