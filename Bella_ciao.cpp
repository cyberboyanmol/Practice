#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t, D, d, P, Q;
    cin >> t;
    while (t--)
    {
        cin >> D >> d >> P >> Q;
        ll num = D / d;
        ll rem = D % d;
        ll sum1, sum2;
        sum1 = d * ((num * ((2 * P) + (num - 1) * Q)) / 2);
        sum2 = rem * (P + (num * Q));
        ll ans = sum1 + sum2;
        cout << ans << endl;
    }
    return 0;
}