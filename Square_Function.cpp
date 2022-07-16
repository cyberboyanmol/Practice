// /*
// **********************************************************
// * AUTHOR   : ANMOL GANGWAR               * *    *****    *
// * LANGUAGE : c++14,c++17                * * *   * ***    *
// * IDE      : VS CODE ,codechef(ide)    *     *  *****    *
// **********************************************************
// */
// #include <bits/stdc++.h>
// #define ll long long
// #define v_pair vector<pair<ll, ll>>
// #define vec vector<ll>
// #define for1(i, a, b, k) for (int i = a; i < b; i += k)
// #define for2(i, a, b, k) for (ll i = b; i > a; i -= k)
// #define for3(i, n, k) for (ll i = 1; i <= n; i += k)
// #define for4(i, n, k) for (ll i = n; i >= 0; i -= k)
// #define srt(ar) ar.begin(), ar.end()
// #define srt2(ar) ar.begin(), ar.end(), greater<pair<ll, ll>>()
// #define pb push_back
// #define emb emplace_back
// #define em emplace
// #define in insert
// #define tc(t) while (t--)
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t, N;
//     cin >> t;
//     tc(t)
//     {
//         cin >> N;
//         ll arr[N];
//         for (int i = 0; i < N; i++)
//         {
//             cin >> arr[i];
//         }
//         for (int i = 0; i < N; i++)
//         {
//             for (int j = i + 1; j < N; j++)
//             {
//                 ll X = arr[i] * arr[j];
//                 ll fun = X /
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool F(int x)
{
    long long left = 1, right = x;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        if (mid * mid == x)
        {
            return false;
        }
        if (mid * mid < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (F(arr[i] * arr[j]))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}