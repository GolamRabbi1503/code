/*C++ program for Swapping variable*/
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    cout<<"a value is="<<a<<" "<<"b value is="<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"After Swapping:"<<endl;
    cout<<"a value is="<<a<<"\n"<<"b value is="<<b<<endl;
    return 0;
}
