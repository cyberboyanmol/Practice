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

int32_t main()
{
    fast;
    int N, M;
    vi vec, vec1;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        vec.emplace_back(x);
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        vec1.emplace_back(x);
    }

    sort(vec.begin(), vec.end());
    sort(vec1.begin(), vec1.end(), greater<int>());

    int Max = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            // int num = vec1[j] / vec[i];
            double num = double(double(vec1[j]) / double(vec[i]));
            double intpart, frapart;
            frapart = modf(num, &intpart);
            // cout << intpart << " " << frapart << endl;

            if (frapart == 0 && intpart > Max)
            {
                Max = intpart;
            }
        }
    }
    int flg = 0;
    mii mpp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            double num = double(double(vec1[j]) / double(vec[i]));
            double intpart, frapart;
            frapart = modf(num, &intpart);
            // frapart = ceil(frapart);
            // cout << frapart << " " << intpart << endl;
            if (frapart == 0 && intpart == Max)
            {
                // mpp[intpart]++;
                flg++;
            }
        }
    }
    cout << flg << endl;
    // for (auto it : mpp)
    // {
    //     cout << it.second << endl;
    //     break;
    // }
    return 0;
}