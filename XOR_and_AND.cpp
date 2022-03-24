/*
********************
* AUTHOR   : ANMOL GANGWAR               * *    ***    *
* LANGUAGE : c++14,c++17                * * *   * *    *
* IDE      : VS CODE ,codechef(ide)    *     *  ***    *
********************
*/
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define int long long
#define ull unsigned long long
#define endl "\n"
#define pb emplace_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>
#define pqb priority_queue<int>
#define lb(x, n) lower_bound(all(x), n)
#define ub(x, n) upper_bound(all(x), n)
#define all(x) x.begin(), x.end()
#define maxi(x) x[max_element(all(x)) - x.begin()]
#define mini(x) x[min_element(all(x)) - x.begin()]
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define tc(t) \
    int t;    \
    cin >> t; \
    while (t--)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int32_t main()
{
    fast;
    tc(t)
    {
        int N;
        cin >> N;

        mii mp;

        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            int msb = (int)log2(x);
            mp[msb]++;
        }
        int ans = 0;
        for (auto it : mp)
        {
            ans += (it.second - 1) * (it.second) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}
