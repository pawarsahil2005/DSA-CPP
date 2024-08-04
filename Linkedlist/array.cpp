#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr=new int;
    arr [0]=1;
    arr [1]=2;
    arr [2]=3;
    arr [3]=4;
    arr [4]=6;
    cout<<arr[3]<<endl;
    delete []arr;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;

    }
   

    return 0;
}