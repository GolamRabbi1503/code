/*C++ program to check Lucky Number
Lucky Number is a number if sum of its digits,as well as sum of the squares of its digits is prime number is called lucky number
25-(2,5)-7-(4+25)-29 & 21,23 are lucky numbers*/
#include <iostream>
using namespace std;
int main()
{
    int number,rem,sum=0,square,sum_square=0;
    cout << "Enter a number to check for Lucky !"<< endl;
    cin>>number;
    int temp=number;
    while(number!=0)
    {
        rem=number%10;
        square=rem*rem;
        sum_square=square+sum_square;
        sum=sum+rem;
        number=number/10;
    }
    cout<<"Sum of Digits:"<<sum<<endl;
    cout<<"Square of Digits:"<<sum_square<<endl;
    if(sum%2!=0 && sum_square%2!=0)
    {
        cout<<temp<<":"<<"This is lucky number";
    }
    else
    {
        cout<<temp<<":"<<"This is not Lucky number";
    }

    return 0;
}
