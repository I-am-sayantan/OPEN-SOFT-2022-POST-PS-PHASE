#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,temp;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"The array in the sorted order is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    delete []arr;
}
