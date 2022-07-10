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
bool sortby(const pair<int, int> a, const pair<int, int> b)
{
    return a.first - b.second <= b.first - a.second;
}

int32_t main()
{
    fast;
    tc(t)
    {
        int N, R;
        cin >> N >> R;
        vector<pair<int, int>> vec(N);
        for (int i = 0; i < N; i++)
            cin >> vec[i].first;
        for (int i = 0; i < N; i++)
            cin >> vec[i].second;

        sort(vec.begin(), vec.end(), sortby);
        int flg = 0, val = 0;
        for (int i = 0; i < N;)
        {
            if (vec[i].first <= R)
            {
                val = R / vec[i].first;
                flg += val;
                R = R % vec[i].first + val * vec[i].second;
            }
            else
            {
                i++;
            }
        }
        cout << flg << endl;
    }
    return 0;
}