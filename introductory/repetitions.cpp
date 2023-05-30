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
   	string s;
    cin >> s;
    int curr = 1;
    int maxi = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) {
            curr++;
        }
        else {
            curr = 1;
        }
        if (curr > maxi) {
            maxi = curr;
        }
    }
    cout << maxi << endl;
    return 0;
}
