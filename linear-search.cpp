/*C++ program for Linear Search Algorithm*/
#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i,search;
    cout<<"Please enter the elements of the array:";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Your array Is:";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the Elements to be searched:"<<endl;
    cin>>search;
    for(i=0; i<n; i++)
    {
        if(arr[i]==search)
        {
            cout<<"Item is found at location:"<<i<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Item not found at location"<<i<<endl;
    }

    return 0;
}
