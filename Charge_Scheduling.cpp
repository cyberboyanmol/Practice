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
    ll t, N;
    cin >> t;
    tc(t)
    {

        cin >> N;
        vec charge(N), time(N);
        for1(i, 0, N, 1)
        {
            cin >> charge[i];
        }
        for1(i, 0, N, 1)
        {
            cin >> time[i];
        }
        map<int, vector<pair<int, int>>> mvp_;
        for1(i, 0, N, 1)
        {
            ll val = i + 1;
            ll index_ = charge[i];
            ll num1 = time[i];
            mvp_[index_].pb({num1, val});
        }
        ll resolve = 0;
        map<ll, pair<ll, ll>> arr;
        for (auto it = mvp_.begin(); it != mvp_.end(); it++)
        {
            ll first = it->first;
            vector<pair<int, int>> arr = it->second;

            srt(arr);
            for (ll i = 0; i < arr.size(); i++)
            {
                ll val1 = arr[i].first;
                ll val2 = arr[i].second;
                ll num = resolve + first;
                if (num <= val1)
                {
                    arr[resolve] = {num, val2};
                    resolve = num;
                }
            }
        }
        cout << arr.size() << endl;
        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            cout << it->second.second << " " << it->first << " " << it->second.first << endl;
        }
    }
    return 0;
}
/***********************************************************************************************************/
// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;
// #define ll long long int

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n), t(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> t[i];
//     }
//     map<int, vector<pair<int, int>>> mp;
//     for (int i = 0; i < n; i++)
//     {
//         int index = i + 1, start = a[i], end = t[i];
//         mp[start].push_back({end, index});
//     }
//     int res = 0;
//     map<int, pair<int, int>> result;
//     for (auto it = mp.begin(); it != mp.end(); it++)
//     {
//         int start = it->first;
//         vector<pair<int, int>> v = it->second;
//         sort(v.begin(), v.end());
//         for (int i = 0; i < v.size(); i++)
//         {
//             int end = v[i].first, index = v[i].second;
//             int y1 = res + start;
//             if (y1 <= end)
//             {
//                 result[res] = {y1, index};
//                 // cout<<index<<" "<<res<<" "<<y1<<endl;
//                 res = y1;
//             }
//         }
//     }
//     cout << result.size() << endl;
//     for (auto it = result.begin(); it != result.end(); it++)
//     {
//         cout << it->second.second << " " << it->first << " " << it->second.first << endl;
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         solve();
//     }
//     return 0;
// }