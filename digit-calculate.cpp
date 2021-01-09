/*C++ program to check the number of digits(Calculate the digits)*/
#include <iostream>
using namespace std;
int main()
{
    int digit,count=0,j=0;
    cout << "Please Enter a Digit which you want to Calculate!" << endl;
    cin>>digit;
    while(digit>0){
       //int rem=digit%10; //find out remainder of that digit
         digit=digit/10;
         j++;//find out remainder of the digits then calculate
    }
    cout<<j;
    return 0;
}
