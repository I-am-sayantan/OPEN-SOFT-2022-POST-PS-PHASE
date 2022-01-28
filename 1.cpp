#include<bits/stdc++.h>
using namespace std;

// sqrt, sqrtl 


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MODx  1000007;
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define Mp make_pair
#define ff first
#define ss second  
#define PI 3.141592953589793238492
#define set_bits __builtin_popcountll
#define left_zeros __builtin_clz(x)
#define right_zeros  __builtin_ctz(x)
#define parity  __builtin_parity(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define fo(i,a,b) for (int i = a; i <= b; i++)
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))



typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}


template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_set <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

bool isvalid(int N,int M,int i,int j)
{
   if(i>=0 && j>=0 && i<N && j<M)
   {
      return true;
   }
   else{
      return false;
   }
}
int power(int x,  int y,int p)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ((ll)power(x, y / 2,p) * power(x, y / 2,p))%p;
    else
        return ((((ll)power(x, y / 2,p) * power(x, y / 2,p))%p)*x)%p;
}
int gcdExtended(int a, int b, int* x, int* y)
{
     
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
     
    
    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
 
    return gcd;
}

int modInverse(int a, int m)
{
    int x, y;
    int g = gcdExtended(a, m, &x, &y);
    
         
        // m is added to handle negative x
        int res = (x % m + m) % m;
        return res;
}

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}







int main() {



    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();

    int n;
    cout << "n (size of the array you need to sort)= ";
    cin >> n;
    vector<int>a(n,0);
    cout << "Input values of the array : " << endl;
    for(int i=0; i<n; i++) cin >> a[i];
    cout << endl << "Original array : ";
    for(int i=0; i<n; i++) cout << a[i] << " ";
    sort(a.begin(),a.end());
    cout << endl << "Sorted array   : ";
    for(int i=0; i<n; i++) cout << a[i] << " ";
    return 0;
    
    }


   


    






