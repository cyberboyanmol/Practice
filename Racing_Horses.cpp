#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t, N;
    cin >> t;
    while (t--)
    {
        cin >> N;
        ll s[N];
        for (int i = 0; i < N; i++)
        {
            cin >> s[i];
        }
        sort(s, s + N);
        ll diff;
        ll mini = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            diff = s[i + 1] - s[i];
            mini = min(mini, diff);
        }
        cout << mini << endl;
    }

    return 0;
}