#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Character : ";
    cin>>ch;

    if(ch>=65 && ch<=90)
        cout<<"Capital Alphabet : "<<ch;
    else if(ch>=97 && ch<=122)
        cout<<"Small Alphabet : "<<ch;
    else if(ch>=48 && ch<=57)
        cout<<"Numerical Value : "<<ch;
    else
        cout<<"Special Character : "<<ch;
getch();

}
