/*
**********************************************************
* AUTHOR   : ANMOL GANGWAR               * *    *****    *
* LANGUAGE : c++14,c++17                * * *   * ***    *
* IDE      : VS CODE ,codechef(ide)    *     *  *****    *
**********************************************************
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
    tc(t)
    {
        int N;
        cin >> N;
        vi vec;
        mii mp;
        for (int i = 0; i < 2 * N; i++)
        {
            int x;
            cin >> x;
            vec.emplace_back(x);
            mp[vec[i]]++;
        }
        bool flg = true;    
        for (int i = 0; i < N; i++)
        {
            if (mp[i] == 0)
            {
                break;
            }
            else if (mp[i] < 2)
            {
                flg = false;
                break;
            }
        }

        if (flg)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}