#include<iostream>
using namespace std;
void print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    } 
    cout<<endl;
}
int partition(int A[],int low,int high)
{
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int temp;
  do{ 
    while(A[i]<=pivot)
    {
        i++;
    }
    while(A[j]>pivot)
    {
        j--;
    }
    
    if(i<j)
    {
        swap(A[i] , A[j]);
    }

  }while(i<j);

  swap(A[low] ,A[j]);
  return j;
}

void quicksort(int A[],int low,int high)
{
    int partitionindex;
    if(low<high){
    partitionindex=partition(A,low,high);
    quicksort( A, partitionindex+1, high);
    quicksort( A, low, partitionindex-1);
    }
}
int main(){
    int n;
    int A[]={65,98,6,98,5,45,65};
    n=7;
   print(A,n);
    quicksort(A,0,n-1);
    print(A,n);

    return 0;
} 