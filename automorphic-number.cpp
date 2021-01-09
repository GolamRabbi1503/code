/*Automorphic Number is number is a number if number Square ends with the same number is called Automorphic number
25-25&25-625 and 76,5,6 is Automorphic Number*/
#include <iostream>
using namespace std;
int main()
{
    int number,flag=0,square,store;
    cout << "Please enter a number for Automorphic Number!" << endl;
    cin>>number;
    store=number;
    square=number*number;
    cout<<"square of digits is="<<square<<endl;
    while(number>0)
    {
        if(number%10==square%10)
        {
            flag=1;//here flag variable is used for certain operations done
            // break;
        }
        number=number/10;
        square=square/10;
    }
    if(flag==1)
    {
        cout<<store<<" "<<":is a Autophorbic Number!"<<endl;
    }
    else
    {
        cout<<store<<" "<<":is not Autophorbic Number!"<<endl;
    }
    return 0;
}
