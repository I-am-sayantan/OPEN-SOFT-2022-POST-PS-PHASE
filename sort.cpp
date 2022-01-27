#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define ff first
#define ss second
#define display(A) for(auto _d:A)cout<<_d<<' ';cout<<'\n'
void solve()
{
    int n;
    cin>>n;
    vi arr(n);
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    display(arr);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //long _t;cin>>_t;while(_t--)
    solve();
    return 0;
}