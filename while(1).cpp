/*C++ program to check while(1)
while(1) always return true infinite times
if condition check inside body of the while then terminate loop
while(0) return false not execute at all*/
#include<iostream>
using namespace std;
main()
{
    int i=0;
    while(1)  //while(1)
    {
        i++;
        if(i<=10)
        {
            //break;
            cout<<"Printed value is="<<i<<endl;
            //break;
        }
    }
}
