#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, N, M;
    cin >> t;
    while (t--)
    {
        cin >> N >> M;

        ll value = 0, sum = 0;

        vector<ll> arr(N, value);

        //arr.resize(1000000000,value);
        // ll arr[N] = {0};
        // fill(arr.begin(), arr.end(), value);
        while (M--)
        {
            ll x, y, rem;
            cin >> x >> y;
            for (ll j = 1; j <= N; j++)
            {

                rem = j % y;
                if (rem != 0)
                {
                    if (x >= arr[j - 1])
                    {
                        arr[j - 1] = x;
                    }
                }
            }
        }

        for (ll j = 0; j < N; j++)
        {
            sum += arr[j];
        }

        cout << sum << endl;
        // arr.clear();
    }
    return 0;
}
