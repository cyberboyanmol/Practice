#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define v_pair vector<pair<int, int>>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n1, m1;

        cin >> n1 >> m1;
        v_pair Arr;
        for (int j = 1; j <= m1; j++)
        {
            ll first, second;
            cin >> first >> second;
            Arr.push_back({first, second});
        }

        sort(Arr.begin(), Arr.end(), greater<pair<int, int>>());

        ll rem;
        for (int j = 1; j <= m1; j++)
        {

            rem = j % Arr.at(j).second;
            if (rem != 0)
            {
                Arr.at(j).first = Arr.at(j).first;
            }
        }
        ll sum = 0;
        for (ll j = 1; j < m1; j++)
        {
            sum += Arr.at(j).first;
        }
        cout << sum << endl;
    }
    return 0;
}
