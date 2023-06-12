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
    ll mod = 1e9+7;
    cin >> n;
    int tot = 1;
    for (int i = 1; i <= n; i++) {
        tot*=2;
        tot%=mod;
    }
    cout << tot << endl;
}
