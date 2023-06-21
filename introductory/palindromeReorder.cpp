#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair;
#define vt vector
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;

int main()
{
    string s;
    cin >> s;
    map<char,int> m;
    for (int i = 0; i < s.size();i++) {
        m[s[i]]++;
    }
    bool o = false;
    bool flag = false;
    string str1="";
    string str2="";
    string mid;
    for (auto e: m) {
        if (e.S%2==1) {
            if (s.size()%2==0) {
                flag = true;
                break;
            }
            else if (o==true) {
                flag=true;
                break;
            }
            else {
                for (int i =0;i<e.S;i++) {
                    mid+=e.F;
                }
                o=true;
            }
        }
        else{
            for (int i = 0; i < e.S/2;i++) {
                str1+=e.F;
                str2+=e.F;
            }
        }
    }
    reverse(str2.begin(),str2.end());
    if (flag==false) {
        cout << str1+mid+str2 << endl;
    }
    else {
        cout << "NO SOLUTION\n";
    }
    return 0;
}

