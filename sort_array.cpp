#include<bits/stdc++.h>
using namespace std;
int tmp;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<=n-1;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}