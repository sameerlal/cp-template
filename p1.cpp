// C++ Template
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <unordered_map>
#include <bits/stdc++.h>
#include <set>
#include <vector>
#include <bitset>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) (int)((x).size())
#define fill(x, y) memset(x, y, sizeof(y))
#define all(x) (x).begin(), (x).end()
#define sci(x) \
    int x;     \
    scanf("%d", &x);
#define scii(x, y) \
    int x, y;      \
    scanf("%d %d", &x, &y);
#define sciii(x, y, z) \
    int x, y, z;       \
    scanf("%d %d %d", &x, &y, &z);
#define TC(x) \
    sci(x);   \
    while (x--)
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#define debug(x)                          \
    {                                     \
        cerr << #x << " = " << x << endl; \
    }
#define rep(i, x, y) for (__typeof(x) i = x; i <= y; i++)
#define repi(i, x, y) for (__typeof(x) i = x; i >= y; i--)
#define fore(itr, x) for (__typeof(x.begin()) itr = x.begin(); itr != x.end(); itr++)
#define forei(itr, x) for (__typeof(x.end()) itr = x.end() - 1; itr != x.begin() - 1; itr--)
typedef long long ll;

const int inf = 0;
const double eps = 0;
const int ms = 0;
const int md = 0;
const int MOD = 1e9 + 7;
using namespace std;

ll nChoosek(ll n, ll k)
{
    if (k > n)
        return 0;
    if (k * 2 > n)
        k = n - k;
    if (k == 0)
        return 1;

    ll result = n;
    for (int i = 2; i <= k; ++i)
    {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

ll binpow(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 1)
    {
        return binpow(a, b - 1) * a % MOD;
    }
    else
    {
        ll b2 = binpow(a, b / 2) % MOD;
        return b2 * b2 % MOD;
    }
}

void solve()
{
    int n; cin >> n;
    int arr[n];
    int sarr[n];
    
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sarr[i] = arr[i];
    }
    sort(sarr, sarr + n);
    
    int start = 0;
    int end = n -1;
    while(sarr[start] == arr[start])
        start++;
    
    while(sarr[end] == arr[end])
        end--;
    
    // debug(start);
    // debug(end);


    for (int i = 0; i < end - start + 1; i++)
    {
        // debug(i);
        // debug(sarr[start + i]);
        // debug(arr[end - i]);
        if (sarr[start + i] != arr[end - i])
        {
            cout << "no" << endl;
            return;
            }
    }

    if(start > end ) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return;
    }

    cout << "yes" << endl;
    cout << start+1 << " " << end+1 << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; t = 1;
    // int t; ./cin >> t;
    while (t--)
    {
        solve();
    }
}
