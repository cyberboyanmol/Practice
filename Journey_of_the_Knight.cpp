/*
********************************************************
* AUTHOR   : ANMOL GANGWAR                             *
* LANGUAGE : c++14,c++17                               *
* IDE      : VS CODE ,codechef(ide)                    *
********************************************************
         ================================
                 KEEP GOING
              EVERYTHING YOU NEED
                WILL COME TO YOU
              AT THE PERFECT TIME
         ================================
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
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx[16] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5, 6, -6, 7, -7, 7, -7};
    int dy[16] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5, 6, -6, 7, -7, 7, -7};

    vector<pii> vec;
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {

            int x = x1 + dx[i];
            int y = y1 + dy[i];
            // if (x >= 1 && x <= 8 && y >= 1 && y <= 8)
            // {
            vec.push_back({x, y});
            // }
        }
    }
    for (auto it : vec)
    {
        // if (it.first == x2 && it.second == y2)
        // {
        //     cout << "YES" << endl;
        //     return;
        // }
        cout << it.first << " " << it.second << endl;
    }
    // cout << "NO" << endl;
}
int32_t main()
{
    fast;
    tc(t)
    {
        solve();
    }
    return 0;
}