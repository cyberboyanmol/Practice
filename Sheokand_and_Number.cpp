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
#define endl "\n"
#define pb emplace_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
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

        vi vec;
        for (int i = 0; i <= 30; i++)
        {
            for (int j = i + 1; j <= 30; j++)
            {
                int x = (1 << i) + (1 << j);
                vec.emplace_back(x);
            }
        }
        sort(vec.begin(), vec.end());
        auto val = lower_bound(vec.begin(), vec.end(), N) - vec.begin();

        cout << min(abs(vec[val] - N), abs(vec[val - 1] - N)) << endl;
        // for (auto it : vec)
        // {
        //     cout << it << "\n";
        // }
    }
    return 0;
}
