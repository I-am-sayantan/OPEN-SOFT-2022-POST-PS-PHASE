// Name: DHRUV GAHOI
// Roll No.: 20AE10011
#include<bits/stdc++.h>
using namespace std;
void sortarray(int *a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements of an array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sortarray(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
    return 0;
}
