#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int t, N, M;
    cin >> t;
    while (t--)
    {
        cin >> N >> M;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += arr.at(i);
        }
        if ((sum + M) % N == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}