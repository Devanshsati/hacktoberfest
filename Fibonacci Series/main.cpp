#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

       int a,b,c,n,i,z;

       for(z=1;z<=3;z++)
       {

       a=0;
       b=1;
       cout<<"\n _________________________________________________________________________________________________________________"<<endl;
       cout<<"\n\t \t \t \t \t \t Fibonacci Series "<<z<<endl;
       cout<<"\n _________________________________________________________________________________________________________________"<<endl;
       cout<<"\n Enter No.OF Term : ";
       cin>>n;
       cout<<"\n _________________________________________________________________________________________________________________"<<endl;

       if(n==1)
        cout<<"\n"<<a;
       else if(n==2)
        cout<<"\t"<<a<<"\t"<<b;
       else
       {
           cout<<"\t"<<a<<"\t"<<b;
        for(i=1;i<=n-2;i++)
        {
            c=a+b;
            cout<<"\t"<<c;
            a=b;
            b=c;
        }
       }

       getch();
       }
}
