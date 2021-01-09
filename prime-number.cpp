/*C++ program to Check Prime Number
Prime Numbers are numbers that have only 2 factors 1 & itself is called Prime Number
Some Prime Numbers are 2,3,5,7,11,13,17,19,23,2357 & so on*/
#include<iostream>
using namespace std;
main()
{
    int n,sum=0;
    cout<<"Please Enter a Number whether it is Prime Number or not"<<endl;
    cin>>n;
    int temp=n;
    cout<<"Factors of that Number:";
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            sum+=i;;

        }

    }
    cout<<endl;
    if(temp==sum-1)
    {
        cout<<temp<<":This is prime number"<<endl;
    }
    else
    {
        cout<<temp<<":This is not prime number";
    }

}
