#include<iostream>
using namespace std;

int main(){
    int a[]={ 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };

    for(int i=1;i<6;i++)
    {
         int temp=a[i];
         int j=i-1;
         while(a[j]>temp && j>=0)
         {
            a[j+1]=a[j];
             j--;         
        }
         a[j+1]=temp;
    }
    
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}