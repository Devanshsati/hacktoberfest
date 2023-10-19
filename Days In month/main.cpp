#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
     int y,m;
     cout<<"Enter Number Of Month : ";
     cin>>m;


     if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        cout<<"31 Days Month";

     else if(m==4||m==6||m==9||m==11)
        cout<<"30 Days Month";

     else if(m==2)
     {
         cout<<"Enter Year : ";
         cin>>y;
         if(y%4==0)
            cout<<"Leap Year 29 Days";
         else
            cout<<"28 Days";
     }

     else
        cout<<"Invalid Month";

     getch();
}
