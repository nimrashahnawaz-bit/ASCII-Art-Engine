# include<iostream>
using namespace std;
main()
{
    int n;
    cout <<"Enter the number of chords: ";
    cin >>n;
    string array[n];
    cout <<"Enter "<<n<<" chords, one per line:"<<endl;
    for (int i =0; i < n; i++){
        cin >> array[i];
     int len = array[i].length();
    if(array[i][len- 1]  != '7'){
        array[i] = array[i]+ '7';
    }
}
cout <<"[ ";
for(int j = 0; j< n; j++){
    cout<< array[j]<<", ";
}
cout <<"]";
}