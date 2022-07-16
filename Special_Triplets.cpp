#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, N;
    cin >> t;

    while (t--)
    {
        cin >> N;
        vector<int> arr;
        ll index_no = 0;
        for (ll i = 1; i <= N; i++)
        {
            ll val = (i + 1);
            arr.emplace_back(val);
        }
        for (int i = 1; i <= N; i++)
        {

            for (int j = i; j <= N; j += i)
            {
                if (j % i == 0)
                {
                    for (int k = i; k <= N; k += j)
                    {
                        if (k % j == i)
                        {
                            //cout << "Triplet is " << arr[i] << ", " << arr[j] << ", " << arr[k];
                            index_no += 1;
                        }
                    }
                }
            }
        }
        cout << index_no << endl;
    }
    return 0;
}
