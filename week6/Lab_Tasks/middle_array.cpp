# include<iostream>
using namespace std;
main()
{
    int n;
    cout <<"Enter the number of Elements for 1st array: ";
    cin >>n;
    int s[n];
     cout <<"Enter "<<n<<" elements for the 1st array:"<<endl;
    for (int i =0; i<n; i++){
        cin >> s[i];
}
     int m;
    cout <<"Enter the number of Elements for 1st array: ";
    cin >>m;
    int v[m];
     cout <<"Enter "<<m<<" elements for the 1st array:"<<endl;
    for (int i =0; i<m; i++){
        cin >> v[i];
}
cout<<"Resulting array: "<<s[0]<<", ";
for (int j =0; j<m; j++){
        cout << v[j]<<", ";
}
cout <<s[1];

}