/*C++ program for Reverse Number-78-87*/
#include <iostream>
using namespace std;
int main()
{
    int number,rem,temp,reverse_num=0;
    cout << "Please Enter a number for Reverse!"<< endl;
    cin>>number;
    while(number!=0)
    {
        rem=number%10;
        reverse_num=reverse_num*10+rem;
        number/=10;
    }
    if(temp!=reverse_num)
        cout<<"The Reverse Number is:"<<reverse_num;
    return 0;
}
