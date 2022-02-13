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
        int num;
        cin >> num;
        vi vec;
        while (num)
        {
            int rem = num % 10;

            vec.emplace_back(rem);

            num /= 10;
        }
        int count = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i])
            {
                count++;
            }
            vec[i] = vec[i] * (pow(10, i));
        }
        cout << count << "\n";

        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i] != 0)
            {
                cout << vec[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}