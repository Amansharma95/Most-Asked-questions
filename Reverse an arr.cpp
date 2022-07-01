#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int ReverseArray(int arr[],int start,int end)
 {
     int temp;
     while(start<end)

     {
          temp=arr[start];
          arr[start]=arr[end];
          arr[end]=temp;
          start++;
           end--;
     }

 }

int main()
{
    int arr[]={3,5,6,2,8};
    int n= sizeof(arr)/sizeof(arr[0]);

    ReverseArray(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;

}
