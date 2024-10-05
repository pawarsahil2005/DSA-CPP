#include <iostream>
using namespace std;
void print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    } 
    cout<<endl;
}

void merge(int A[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int B[high+1];
    while(i<=mid && j<=high)
    {
        if(A[i]<A[j])
        {
            B[k]=A[i];
            i++;
            k++;
        }
        else {
            B[k]=A[j];
            j++;
            k++;
        }
    }
       while(i<=mid)
        {
            B[k]=A[i];
            i++;
            k++;
        } 
        while(j<=high)
        {
            B[k]=A[j];
            j++;
            k++;
        }
    //copy the array in original array
  for(int i=low;i<=high;i++)
    {
        A[i]=B[i];
    }
}
void mergesort(int A[],int low,int high)
{   
    if (low<high)
    {
        int mid=(low+high)/2;
        mergesort(A,low,mid);
        mergesort(A,mid+1,high);
        merge(A,low,mid,high);
 
    }
}
   
int main()
{
    int A[]={67,88,4,32,88,999,1};
    int n=7;
    print(A,n);
    mergesort(A,0,n-1);
    cout<<endl;
    print(A,n);
    return 0;

}
