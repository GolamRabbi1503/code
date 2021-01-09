/*Harshad Number is a number if sum of its digits is divisible by the sum is called Harshad Number-18=1+8=9=18/9=2*/
#include <iostream>
using namespace std;
int main()
{
    int number,sum=0,rem,temp,value;
    cout << "Enter a Harshad Number for Checking!" << endl;
    cin>>number;
    temp=number; //Store the variable here for not loosing Original Variable
    do{
        rem=number%10;
        sum=sum+rem;
        number=number/10;
    }
        while(number!=0);
        value=sum;
        cout<<"Sum of the digit is: "<<value<<"\n";
        if(temp%value==0){
            cout<<temp<<": is a Harshad Number";
        }
        else{
            cout<<temp<<":is not a Harshad Number";
        }

    return 0;
}
