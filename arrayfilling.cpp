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
        v_pair Arr_;
        for (int j = 0; j < m1; j++)
        {
            ll first_, second_;
            cin >> first_ >> second_;
            Arr_.push_back({first_, second_});
        }

        // sort(Arr_.begin(), Arr_.end(), greater<pair<int, int>>());
        sort(Arr_.rbegin(), Arr_.rend());

        ll val_2 = 1, Num = n1, val_1 = 0;
        for (int j = 0; j < m1 && Num > 0; j++)
        {
            ll first_element = Arr_.at(j).first, second_element = Arr_.at(j).second;
            ll greater_cd = __gcd(val_2, second_element);

            val_2 = val_2 * second_element / greater_cd;

            val_1 += (Num - n1 / val_2) * first_element;

            Num = n1 / val_2;
        }

        cout << val_1 << endl;
    }
    return 0;
}
