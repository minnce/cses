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
    if (n<=2) {
        cout << "NO\n";
    }
    else if ((n-3)%4!=0&&n%4!=0) {
        cout << "NO\n";
    }
    else if ((n-3)%4==0) {
        cout << "YES\n";
        vt<ll> v1;
        vt<ll> v2;
        v1.pb(1);
        v1.pb(2);
        v2.pb(3);
        for (int i = 4; i < n; i+=4) {
            v1.pb(i);
            v1.pb(i+3);
            v2.pb(i+1);
            v2.pb(i+2);
        }
        cout << v1.size() << endl;
        for (int i = 0; i < v1.size(); i++) {
            cout << v1[i] << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for (int i = 0; i < v2.size(); i++) {
            cout << v2[i] << " ";
        }
        cout << endl;
    }
    else if (n%4==0) {
        cout << "YES\n";
        vt<ll> v1;
        vt<ll> v2;
        for (int i = 0; i < n/2; i++) {
            if (i%2==0) {
                v1.pb(i+1);
                v1.pb(n-i);
            }
            else {
                v2.pb(i+1);
                v2.pb(n-i);
            }
        }
        cout << v1.size() << endl;
        for (int i = 0; i < v1.size(); i++) {
            cout << v1[i] << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for (int i = 0; i < v2.size(); i++) {
            cout << v2[i] << " ";
        }
        cout << endl;
    }
}
