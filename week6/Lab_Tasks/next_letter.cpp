# include<iostream>
using namespace std;
main()
{
    string w;
    cout<<"Enter a word: ";
    cin >> w;
    int i;
    for(i=0; i != w.length(); i++){
      if(w[i] == 'z'){
         w[i]= 'a'; }
         else{   
         w[i] = w[i]+1;}
    }
cout<<"Shifted Word: "<<w;
}