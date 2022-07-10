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

int32_t main()
{
    fast;
    tc(t)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
        int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};
        vector<pair<int, int>> vec1, vec2;

        for (int i = 0; i < 8; i++)
        {
            int x = x1 + dx[i];
            int y = y1 + dy[i];
            if (x >= 1 && x <= 8 && y >= 1 && y <= 8)
                vec1.push_back({x, y});

            x = x2 + dx[i];
            y = y2 + dy[i];

            if (x >= 1 && x <= 8 && y >= 1 && y <= 8)
                vec2.push_back({x, y});
        }
        bool flg = false;
        for (auto it : vec1)
        {
            for (auto it2 : vec2)
            {
                if (it == it2)
                {
                    // cout << it2.first << " " << it2.second << endl;
                    flg = true;
                    break;
                }
            }
        }
        if (flg)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}