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

ll fac2(int len, string str)
{
    ll num = 1;

    for (ll j = 0; j < len; j++)
    {
        num = num * (str[j] - 48);
    }
    return num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, N, index = 0;
    cin >> t;

    while (t--)
    {
        cin >> N;
        // string str = {0};
        ll arr[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
        string str, str1;
        ll index = 0;
        ll val;
        ll val2;
        for (ll i = 0; i <= N; i++)
        {
            str = to_string(i);
            // str1 = to_string(i);
            ll len = str.size();
            // val = fac(len);
            val2 = fac2(len, str);
            if (val2 >= arr[str.size()])
            {
                // index += 1;
                index++;
            }
        }

        cout << index << endl;
    }
    return 0;
}