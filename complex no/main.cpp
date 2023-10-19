#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

struct complex
{
    int real,img;
};

int main()
{
    complex c1,c2,c3;
    int x;
    cout<<"Real 1: " ;
    cin>>c1.real;
    cout<<"Imag 1: ";
    cin>>c1.img;
    cout<<"real 2: ";
    cin>>c2.real;
    cout<<"Imag 2: ";
    cin>>c2.img;
    cout<<"\n\t\tMenu \n\t\t";
    cout<<"1. Add 2. Subtract 3. Multiply 4. Divide   = ";
    cin>>x;
    switch(x)
    {
        case 1 : c3.real=c1.real+c2.real;
                 c3.img=c1.img+c2.img;
                 cout<<"Result :"<<c3.real<<"+"<<c3.img<<"i";
                 break;

        case 2 : c3.real=c1.real-c2.real;
                 c3.img=c1.img-c2.img;
                 cout<<"Result :"<<c3.real<<"+"<<c3.img<<"i";
                 break;

        case 3 : c3.real=c1.real*c2.real-c1.img*c2.img;
                 c3.img=c1.real*c2.img+c1.img*c2.real;
                 cout<<"Result :"<<c3.real<<"+"<<c3.img<<"i";
                 break;

        case 4 : c3.real=((c1.real*c2.real)+(c1.img*c2.img))/(pow(c2.img,2)+pow(c2.real,2));
                 c3.img=((c1.img*c2.real)+(c1.real*c2.img))/(pow(c2.real,2)+pow(c2.img,2));
                 cout<<"Result :"<<c3.real<<"+"<<c3.img<<"i";
                 break;

        default : "Invalid Choice";
    }
    getch();
}
