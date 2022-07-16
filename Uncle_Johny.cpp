#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t, N, K;

    cin >> t;
    while (t--)
    {
        cin >> N;
        vector<int> arr;
        for (int i = 0; i < N; i++)
        {

            int x;
            cin >> x;
            arr.emplace_back(x);
        }
        cin >> K;
        int num = arr.at(K - 1);
        sort(arr.begin(), arr.end());

        for (int i = 0; i < N; i++)
        {
            if (arr.at(i) == num)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
