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
      int arr[n-1];
      for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
      }
      sort(arr,arr+n-1);
      bool flag = false;
      for (int i = 0; i < n-1; i++) {
        if (arr[i]!=i+1) {
          flag = true;
          cout << i+1 << endl;
          break;
        }
      }
      if (flag == false) {
          cout << n << endl;
      }
  return 0;
}
