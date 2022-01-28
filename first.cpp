#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vctl vector<long long int>
#define f(i, init, n) for (ll i = init; i < n; i++)
#define rf(i, n, end) for (ll i = n; i > end; i--)
#define all(a) a.begin(), a.end()
#define mii map<long long int, long long int>
#define umii unordered_map<long long int, long long int>
#define pii pair<long long int, long long int>
#define mod 1000000007
ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    else if (y == 1)
        return x;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
void printVector(vctl &v)
{
    for (auto j : v)
        cout << j << " ";
    cout << endl;
}
void yes()
{
    cout << "YES" << endl;
}
void no()
{
    cout << "NO" << endl;
}
void solve()
{
    ll n;
    cin >> n;
    vctl arr(n);
    f(i, 0, n)
    {
        cin >> arr[i];
    }
    sort(all(arr));
    f(i, 0, n)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}