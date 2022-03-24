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
        string str;
        cin >> str;
        // sort(str.begin(), str.end());
        // vector<pair<int, int>> vec;
        // int i = 0;
        // int j = N - 1;
        // while (i <= j)
        // {
        //     vec.push_back({str[i], str[j]});
        //     i++;
        //     j--;
        // }
        // int flg = 0, count = 0;
        // for (auto it : vec)
        // {
        //     if (it.first != it.second)
        //     {
        //         flg++;
        //     }
        //     else
        //     {
        //         count++;
        //     }
        // }

        // if (flg || count)
        // {
        //     if (count)
        //     {
        //         cout << 2 * flg + 1 << endl;
        //     }
        //     else
        //     {
        //         cout << 2 * flg << endl;
        //     }
        // }

        int zero = 0, ones = 0;
        for (int i = 0; i < N; i++)
        {
            str[i] == '0' ? zero++ : ones++;
        }

        int Min = min(ones, zero);
        int Max = max(ones, zero);
        if (Min != Max)
        {
            cout << 2 * Min + 1 << endl;
        }
        else
        {
            cout << 2 * Min << endl;
        }
    }
    return 0;
}