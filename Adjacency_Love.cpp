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

void ans()
{
    int N;
    cin >> N;
    vi vec_odd, vec_even;
    int evencount = 0, oddcount = 0;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (a & 1)
        {
            vec_odd.emplace_back(a);
            oddcount++;
        }
        else
        {
            vec_even.emplace_back(a);
            evencount++;
        }
    }

    if ((evencount == 0 && oddcount & 1) || oddcount <= 1)
    {
        cout << "-1" << endl;
        return;
    }

    vi final;
    if (oddcount & 1)
    {
        for (int i = 0; i < oddcount - 1; i++)
        {
            final.emplace_back(vec_odd[i]);
        }
    }
    else
    {
        for (int i = 0; i < oddcount; i++)
        {
            final.emplace_back(vec_odd[i]);
        }
    }

    for (auto it : vec_even)
    {
        final.emplace_back(it);
    }
    if (oddcount & 1)
    {
        final.emplace_back(vec_odd[oddcount - 1]);
    }
    for (auto it : final)
    {
        cout << it << " ";
    }
    cout << endl;
}
int32_t main()
{
    fast;
    tc(t)
    {
        ans();
    }
    return 0;
}