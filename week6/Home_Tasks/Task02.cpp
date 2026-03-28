# include<iostream>
using namespace std;
main()
{
    int num;
    int sum = 0;
    cout <<"Enter the number of Elements: ";
    cin >> num;
    cout <<"Enter "<<num<<" numbers: ";
    int array[num];
    for(int i = 0; i<num; i++){
        cin >> array[i];
    }
    for(int j=0; j<num; j++){
        if(array[j]%2 == 0){
         sum = sum+1;
        }
    }
        cout<<"Total even numbers are: "<<sum;
    
}