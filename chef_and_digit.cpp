#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// ll fac(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * fac(n - 1);
// }

// ll fac2(int len, string str)
// {
//     ll num = 1;

//     for (ll j = 0; j < len; j++)
//     {
//         num = num * (str[j] - 48);
//     }
//     return num;
// }
ll dp[10000001] = {0};
// vector<ll> ind{0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, N;
    cin >> t;
    string str1;
    ll arr[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    while (t--)
    {
        cin >> N;
        // string str = {0};
        string str, str1;
        ll index = 0;

        ll val2;
        for (ll i = 1; i <= N; i++)
        {
            // ll count = ceil(log10(i));
            str = to_string(i);
            val2 = str.size();
            ll val = 1;
            ll temp = i;
            // cout << count << endl;

            // str1 = to_string(i);
            while (i != 0)
            {
                val = val * (i % 10);
                i = i / 10;
            }
            i = temp;
            if (val >= arr[str.size()])
            {
                // index += 1;
                index++;
            }
        }

        cout << index << endl;
    }
    return 0;
}