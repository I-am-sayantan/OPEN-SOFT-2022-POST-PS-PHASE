#include <bits/stdc++.h>
using namespace std;

int main() {
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