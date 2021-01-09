/*C++ program for Ascending & Descending Order*/
#include<iostream>
using namespace std ;
main()
{
    int n,i,j,temp;
    cout<<"Please Enter the size of the Array:";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Printed Array Is:";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //code for Ascending order
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j]; //cout<<"Temp value is:"<<temp;
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Ascending Order is:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<"Descending Order is:"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                //out<<"Temp value is:"<<temp;
                arr[j]=arr[j+1]; //arr[0+1] location assigned to arr[j] location so arr[1]
                arr[j+1]=temp;   //arr[j] that means temp value stored to arr[j+1]
            }
        }
    }

    for(j=0; j<n; j++)
    {
        cout<<arr[j+1]<<endl; //j=0 location does have value just holding address
    }
    return 0;
}
