#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Maxoccuringelement(int arr[],int n)
{
    int count=1;
    int max=0;
    int j;
    for(int i=0;i<n;i++)
    {
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]== arr[j])
                count++;

        }
         if(max<count)
            max=arr[j];
    }
    return max;
}

int main()
{
    int arr[]={4,5,3,6,6,6,8};
    int n= sizeof(arr)/sizeof(arr[0]);

    int rev=Maxoccuringelement(arr,n);

    cout<<rev;
    return 0;
}
