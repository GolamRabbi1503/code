/*C++ program to check Neon Number
Square of digit & square addition is equal to the original number then it is called Neon Number 9-9*9-81-8+1-9
There are only three Neon Numbers 0,1,9*/
#include <iostream>
using namespace std;
int main()
{
    int number,value=0,i,rem=0,sum=0;
    cout << "Digits checking for Neon Number!" << endl;
    cin>>number;
    value=number*number;
    cout<<"Square:"<<value<<endl;
    for(i=1; i<=value; i++)
    {
        rem=value%10;
        sum+=rem;
        value=value/10;
    }
    if(sum==number)
    {
        cout<<sum<< " :" <<"This is a Neon Number"<<endl;
    }
    else
    {
        cout<<"This is not a Neon Number";
    }
    return 0;
}

