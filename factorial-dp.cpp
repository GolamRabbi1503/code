/*find out Factorial by using DP(Dynamic Programming)*/
#include <iostream>
using namespace std;
int fact(int n)
{
    int i;
    int arr[10]= {0};
    arr[0]=1;
    for(i=1; i<=n; i++)
    {
        arr[i]=i*arr[i-1];
        //arr[1]=1*arr[1-1]=1*arr[0]=1*1
        // arr[2]=2*arr[2-1]=2*arr[1]=2*1=2
        //arr[3]=3*arr[3-1]=3*arr[2]=3*2=6
        //arr[4]=4*arr[4-1]=4*arr[3]=4*6=24
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //n is the final location of that array & here stored final value after multiplying
    cout<<"The Factorial of:"<<n<<"="<<arr[n];
}
int main()
{
    int n=4;
    fact(n);
    return 0;
}

