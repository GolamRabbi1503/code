/*C++ program for find out Factorial by using Recursion*/
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)   //base case
    {
        return 1;
    }
    else
    {    //recursion case
       return n*fact(n-1); //call fact with 1, result is stored as 5 * 4 * 3 * 2 * 1

    }
}
int main()
{
    int n=4;
    cout<<fact(n)<<" ";
    return 0;

}
