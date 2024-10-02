#include<iostream>
using namespace std;

void printa(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int A[],int n)
{
    for(int i=0;i<n-1;i++)// for passes
    {
        for(int j=0;j<n-1-i;j++)//for comparision
        {
            if(A[j]>A[j+1])
            {
                A[j]=A[j]+A[j+1];
                A[j+1]=A[j]-A[j+1];
                A[j]=A[j]-A[j+1];
            }
        }

    }
}

int main(){
    int A[]={556,987,9,453,23};
    int n=5;
    printa(A,n);
    bubblesort(A,n);
    printa(A,n);
    return 0;
}