/*C++ program for Bubble Sort Algorithm
(1)search one by one by one for a single pass
(2)compared adjacent elements
begin BubbleSort(list)

   for all elements of list
      if list[i] > list[i+1]
         swap(list[i], list[i+1])
      end if
   end for

   return list

end BubbleSort
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i,j,temp;
    cout<<"Enter Elements:";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Given array is:"<<" ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //code for Bubble Sort
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1]) // 91 0 7 9
            {
                //Swapping the value
                temp=arr[j];
                arr[j]=arr[j+1];//arr[j+1] values was less so transfer it to arr[j]
                //& get new location
                arr[j+1]=temp;
                //just storing the arr[j] values
            }
        }

    }
    cout<<endl;
    for(j=0; j<n; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}
