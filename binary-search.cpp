/*C++ program for Binary Search Algorithm
(1)Divide the array in a half
(2)compared the search value with divide array left or right position
(3)If position on the right search one the right location else if left location
(4)Else search element not found & termination of the program
 first=mid+1 Or last=mid-1 & mid=(first+last)/2
*/
#include<iostream>
using namespace std;
int main()
{
    int n,arr[100],first,last,mid,c,i,search;
    cout<<"Enter Number of Elements:";
    cin>>n;
    cout<<"Enter the Elements of the Array"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Input Array is"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the Elements to be Searched:"<<endl;
    cin>>search;
    first=0,last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(arr[mid]<search)
        {
            first=mid+1;

        }
        else if(arr[mid]==search)
        {
            cout<<"Your Item is found"<<endl;
            break;
        }
        else
        {
            last=mid-1;
        }
        mid=(first+last)/2;
    }
    if(first>last)
    {
        cout<<search<<":Your searched item not found"<<endl;

    }
    return 0;

}
