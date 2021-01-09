/*C++ program to check while(0)
while(0)-treated as false-useless loop*/
#include<iostream>
using namespace std;
main()
{
    cout<<"I am outside of the while(0) loop"<<endl;
    int i;
    while(0)
    {
        //not execute body of the while loop at all
        i++;
        cout<<i;

    }
    cout<<"Ending of the Loop"<<endl;
}
