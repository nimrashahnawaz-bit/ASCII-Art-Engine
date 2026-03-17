#include <iostream>
#include <iomanip>
using namespace std;


main()
{
   cout<<"Enter number count: ";
   int count=1;
   cin>>count;
int a1=0,a2=0,a3=0,a4=0,a5=0;
if(count>=1 && count<=1000){
   for(int i=0; i<count;i++){
         int num;
         cout<<"Enter a number: ";
         cin>>num;

         if(num>=1 && num<=199){
            a1++;
         }
         else if(num>=200 && num<=399){
            a2++;
         }
         else if(num>=400 && num<=599){
            a3++;
         }
         else if(num>=600 && num<=799){
            a4++;
         }
         else if(num>=800 && num<=1000){
            a5++;
         }
      }
   }

float p1 = (a1*100.0)/count; 
float p2 = (a2*100.0)/count;
float p3 = (a3*100.0)/count;
float p4 = (a4*100.0)/count;
float p5 = (a5*100.0)/count;

cout << fixed << setprecision(2);
cout<<p1<<"%"<<endl;
cout<<p2<<"%"<<endl;
cout<<p3<<"%"<<endl;
cout<<p4<<"%"<<endl;
cout<<p5<<"%"<<endl;
   
}