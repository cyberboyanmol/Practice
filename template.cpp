/*
***********************************************************************************
* AUTHOR   : ANMOL GANGWAR                                                        *
* LANGUAGE : c++14,c++17                                                          *
* IDE      : VS CODE ,codechef(ide)                                                            *
*                                                                                 *
***********************************************************************************
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
#define for_(ar) for (auto it : ar)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    v_pair arr;
    for1(i, 0, n, 1)
    {
        ll x, y;
        cin >> x >> y;
        arr.pb({x, y});
    }
    cout << arr.size();
    for4(i, arr.size() - 1, 1)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    return 0;
}