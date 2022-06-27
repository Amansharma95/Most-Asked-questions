
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseString(string str)
{
    int n=str.size();
    for(int i=0;i<n/2;i++)
    {
        swap(str[i],str[n-i-1]);
    }
    cout<<str;
}

int main()
{
    string str="Karan";


    reverseString(str);
    return 0;
}
