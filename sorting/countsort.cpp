#include<iostream>
#include<limits.h>
using namespace std;
 
 void printa(int A[],int n)
 {
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
 }

int maximum(int A[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<A[i])
        max=A[i];
    }
    return max;
}

void countSort(int A[],int n)
{   int i,j;
    int max=maximum(A,n);

    int *count=new int[max+1];

    //initialise array with 0 --> count[max+1]={0};
    for(i=0;i<max+1;i++)
    {
        count[i]=0;
    }

    //increment count of array by 1

    for(i=0;i<n;i++)
    {
        count[A[i]]= count[A[i]]+1;
    }
    
    i=0;  //counter to count array
    j=0;  //counter to given array

    while(i<=max)
    {
        if(count[i]>0)
        {
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else{
            i++;
        }
    
    }
    delete[] count;
    
    }

int main(){
    int A[]={5,9,16,9,20,3,34};
    int n=7;
    printa(A,n);
    countSort(A,n);
    printa(A,n);
    return 0;
}
