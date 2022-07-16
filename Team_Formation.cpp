/*
**********************************************************
* AUTHOR   : ANMOL GANGWAR               * *    *****    *
* LANGUAGE : c++14,c++17                * * *   * ***    *
* IDE      : VS CODE ,codechef(ide)    *     *  *****    *
**********************************************************
*/
#include <bits/stdc++.h>
#define ll long long
#define v_pair vector<pair<ll, ll>>
#define vec vector<ll>
#define for1(i, a, b, k) for (int i = a; i < b; i += k)
#define for2(i, a, b, k) for (ll i = b; i > a; i -= k)
#define for3(i, n, k) for (ll i = 1; i <= n; i += k)
#define for4(i, n, k) for (ll i = n; i >= 0; i -= k)
#define srt(ar) ar.begin(), ar.end()
#define srt2(ar) ar.begin(), ar.end(), greater<pair<ll, ll>>()
#define pb push_back
#define emb emplace_back
#define em emplace
#define in insert
#define tc(t) while (t--)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    tc(t)
    {
        int n, RES(0), RES1(0), RES2(0);
        ll num, num1, num2;
        cin >> n;
        ll rem = n / 2;
        string S1, T1;
        cin >> S1;
        cin >> T1;
        for (int i = 0; i < n; i++)
        {
            if (S1[i] == '1' && T1[i] == '1')
            {
                RES += 1;
            }
            else if (S1[i] == '1' && T1[i] == '0')
            {
                RES1 += 1;
            }
            else if (S1[i] == '0' && T1[i] == '1')
            {
                RES2 += 1;
            }
        }
        if (RES == RES2)
        {
            num = RES + RES1;
            cout << min(num, rem) << endl;
        }

        else
        {

            num1 = min(RES, RES2);
            num2 = RES1 + num1;
            cout << min(num2, rem) << endl;
        }
    }
    return 0;
}