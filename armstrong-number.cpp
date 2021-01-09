/*Armstrong Number or narcissistic number if it is equal to the sum of its own digits raised to the power of the number of digits
153=1*1*1*1+5*5*5+3*3*3=153/370,371,407 are Armstrong Number*/
#include <iostream>
using namespace std;
int main()
{
    int num,rem, sum= 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    int temp = num;
    while (num!= 0)
    {
        rem=num% 10;
        sum+= rem * rem * rem;
        num/=10;

    }
    if (temp==sum)
        cout <<temp<< " is an Armstrong number.";
    else
        cout <<temp<< " is not an Armstrong number.";

    return 0;
}
