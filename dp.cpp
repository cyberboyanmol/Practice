/*
***********************************************************************************
* AUTHOR   : ANMOL GANGWAR                                                        *
* LANGUAGE : c++14,c++17                                                          *
* IDE      : VS CODE ,codechef(ide)                                               *
*                                                                                 *
***********************************************************************************
*/
#include <bits/stdc++.h>
using namespace std;
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

vec arr(100000000, 0);
int main()
{
    int index = 0;
    int factorial[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    for (int i = 1; i <= 1e7; i++)
    {
        ll sm = ceil(log10(i));
        ll num1 = i, val = 1;

        while (i != 0)
        {
            val = val * (i % 10);
            i = i / 10;
        }
        i = num1;
        if (val >= factorial[sm])
        {
            index++;
            arr[i] = index;
        }
    }

    int t;
    cin >> t;
    ll N;
    tc(t)
    {
        cin >> N;
        // while (t--)
        // {
        //     cin >> N;
        //     //     // string str = {0};
        //     //     string str, str1;
        //     //     ll index = 0;
        //     //     ll val;
        //     //     ll val2;
        //     //     for (ll i = 0; i <= N; i++)
        //     //     {
        //     //         str = to_string(i);
        //     //         // str1 = to_string(i);
        //     //         ll len = str.size();
        //     //         val = fac(len);
        //     //         val2 = fac2(len, str);
        //     //         if (val2 >= val)
        //     //         {
        //     //             // index += 1;
        //     //             index++;
        //     //         }
        //     //     }

        //     //     cout << index << endl;
        // }
        cout << arr[N] << endl;
    }
    return EXIT_SUCCESS;
}