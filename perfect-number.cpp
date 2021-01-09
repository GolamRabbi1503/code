/*C++ program to Check Perfect Number
Sum of its divisor except itself is equal to original number is called Perfect Number 6=3+2+1
Some Perfect Numbers are-28-496-8128*/
#include <iostream>
using namespace std;
int main()
{
    int number,i,sum=0;
    cout << "please enter a number!" << endl;
    cin>>number;
    int temp=number;
    for(i=1; i<=number; i++)
    {
        if(number%i==0)
        {
            sum=sum+i;
        }
    }
    int value=sum-temp;
    if(value ==temp)
    {
        cout<<"This is a Perfect Number"<<endl;
    }
    else
    {
        cout<<"This is not a Perfect Number"<<endl;
    }

    return 0;
}
