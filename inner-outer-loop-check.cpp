/*C++ program to check Outer loop & Inner Loop*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(k=0; k<2; k++)
    {
        cout<<"k"<<k<<"=I am for the 1st outer loop"<<endl;

        for(i=0; i<2; i++)
        {
            cout<<"i"<<i<<"=I am  for the Second outer loop"<<endl;
            for(j=0; j<2; j++)
            {                          //inner loop for i
                //k=0,i=0,j=0,1
                //i=1,j=0,1
                //k=1,i=0,j=0,1
                //i=1,j=0,1

                cout<<"j"<<j<<"=I am for the Inner loop"<<endl;
            }
            cout<<"------------------------"<<endl;

        }
    }

    return 0;
}
