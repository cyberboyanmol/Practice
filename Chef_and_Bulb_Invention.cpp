#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll N, P_gas, K, index = 0;
        cin >> N >> P_gas >> K;
        ll mod = (P_gas % K) - 1;

        ll val = (((N - 1) / K) * K);

        val -= -(N - 1);
        if (mod > val)
        {
            index += (mod - val) * ((N - 1) / K) + (val + 1) * ((N - 1) / K + 1);
        }
        else
        {
            index += ((N - 1) / K + 1) * (mod + 1);
        }
        for (int j = mod + 1; j <= N - 1; j += K)
        {
            index++;
            if (j == P_gas)
            {
                cout << index << endl;
                break;
            }
        }
    }
    return EXIT_SUCCESS;
}
