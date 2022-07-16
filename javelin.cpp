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

        ll N, M, X;
        cin >> N >> M >> X;
        int Arr1_[N + 1];
        int index = 0;
        for3(i, N, 1)
        {
            cin >> Arr1_[i];
            if (Arr1_[i] >= M)
                index += 1;
        }
        if (index >= X)
        {

            cout << index << " ";

            for3(i, N, 1)
            {
                if (Arr1_[i] >= M)
                {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << X << " ";
            if (index > 0)
            {
                for (int i = 1; i <= N; i++)
                {
                    if (Arr1_[i] >= M)
                    {
                        Arr1_[i] = -1;
                    }
                }
            }

            ll val = X - index;
            tc(val)
            {
                ll index2 = 0, res_ = 0;

                for3(i, N, 1)
                {
                    if (Arr1_[i] > res_)
                    {
                        res_ = Arr1_[i];
                        index2 = i;
                    }
                }
                Arr1_[index2] = -1;
            }

            for3(i, N, 1)
            {
                if (Arr1_[i] == -1)
                    cout << i << " ";
            }
            cout << "\n";
        }
    }
    return EXIT_SUCCESS;
}