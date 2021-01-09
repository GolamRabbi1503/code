/*C++ program to Check Magic Number
A number is said to be magic number, when the recursive sum of the digits is 1.
Suppose a number is like 50311 = 5 + 0 + 3 + 1 + 1 = 10 = 1 + 0 = 1, this is magic number.
List of Magic numbers from 1 to 100 are :1, 10, 19, 28, 37, 46, 55, 64, 73, 82, 91, 100*/
#include <iostream>
using namespace std;
int isMagicNumber(int n)
{
    cout<<"Enter number"<<endl;
    cin>>n;
    int sumOfDigits=0;
    while(n>0||sumOfDigits>9)
    {
        if(n==0) //
        {
            n=sumOfDigits;
            sumOfDigits=0; //set the value 0,otherwise not decreased outside of the if condition
        }
        sumOfDigits+=n%10;
        n/=10;
    }
    cout<<"sumOfDigits for Magic Number is ="<<sumOfDigits<<endl;
    if(sumOfDigits==1)
    {
        cout<<"This is Magic Number";

    }
    else
    {
        cout<<"This is not Magic Number";
    }
}
int main()
{
    int n;
    isMagicNumber(n);
    return 0;
}
