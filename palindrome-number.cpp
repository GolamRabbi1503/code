/*C++ program to check Palindrome Number
PN is number where reverse of that number is equal to original number is called Palindrome Number 121-121,131,9,212*/
#include <iostream>
using namespace std;
int main()
{
int number;
cout<<"please enter a number"<<endl;
cin>>number;
int sum=0,rem,temp;
temp=number;
while(number>0)
{
    rem=number%10;
    sum=(sum*10)+rem;
    number=number/10;
}
if(temp==sum) //compared with the stored original value
{
    cout<<"This is a palindrome number!"<<endl;
}
else
{
    cout<<"This is not a palindrome number"<<endl;
}
return 0;

}

