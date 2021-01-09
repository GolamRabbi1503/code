/*C++ program for Matrix Addition and Matrix Multiplication
Set the location for Resultant Matrix-C[k,i]-(0,0)-(0,1)-(1,0)-(1,1)
Inner & Outer loop iteration: 1st k=0,i=0,j=0,1 Second i=1,j=0,1 Third k=1,i=0,j=0,1 Fourth i=1,j=0,1 END of LOOP*/
#include<iostream>
using namespace std;
int main()
{

    int A[2][2]= {{1,0},{3,0}},B[2][2]= {{2,1},{0,1}};
    int C[2][2],i,j,k,sum=0;

    cout<<"Printed Matrix for A is:="<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;

    }

    cout<<"Printed Matrix for B is:="<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    //Matrix addition calculation
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }

    }
    cout<<"The addition-A+B is:"<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    //Matrix multiplication calculation
    /*k=0,i=0,j=0,1   then i=1,j=0,1   then k=1,i=0,j=0,1    then i=1,j=0,1*/
    for(k=0; k<2; k++)
    {
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                sum=sum+(A[k][j]*B[j][i]);
                /* execute ROW size*/
            }
            C[k][i]=sum; //C[k,i]-(0,0)-(0,1)-(1,0)-(1,1)
            sum=0;
        }
    }
    cout<<"The multiplication-A*B is :"<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<C[i][j]<<" ";

        }
        cout<<endl;

    }
    return 0;
}
