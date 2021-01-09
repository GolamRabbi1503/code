/*C++ program to check Strong Number
Strong Number is a special number whose sum of factorial of its is equal to the original number
Some Strong Numbers are 145=1!+4!+5!=145,40585*/
#include <iostream>
using namespace std;
int main()
{
    int number,fact,sum=0,temp,rem,value,i;
    cout << "please enter a number for checking Strong Number or not!" << endl;
    cin>>number;
    temp=number;
    while(number!=0)
    {
        fact=1;
        rem=number%10;
        for(rem; rem>0; rem--) //when rem counting end go outside +add
        {
            fact=fact*rem;
        }
        sum=sum+fact;
        number=number/10;

    }
    if(temp==sum)
    {
        cout<<temp<<":This is Strong Number";
    }
    else
    {

        cout<<temp<<":This is not a Strong Number";
    }
    return 0;
}
