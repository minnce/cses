#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll n;
    cin >> n;
    ll arr[n];
    ll tot = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++) {
        if (arr[i]<arr[i-1]) {
            tot+=abs(arr[i]-arr[i-1]);
            arr[i]=arr[i-1];
        }
    }
    cout << tot << endl;
    return 0;
}
