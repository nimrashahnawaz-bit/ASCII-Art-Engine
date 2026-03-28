# include<iostream>
using namespace std;
main()
{
    bool correct = false;
    int s;
    cout <<"Enter the size of array: ";
    cin >>s;
    int n[s];
    cout <<"Enter "<<s<<" elements of the array: "<<endl;
    for(int i =0; i <s; i++){
        cin >> n[i];
    }
    for(int i =0; i <s; i++){
        if( (i%2 == 0 && n[i]%2!=0) || (i%2!= 0 && n[i]%2==0) )
        correct = true;
        break;
    }
        
if(correct){
    cout<<"The array is not special";
}
else{
    cout<<"The array is special";
}
}