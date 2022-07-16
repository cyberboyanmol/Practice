#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        ll val = 0;
        while (N != 0)
        {
            ll rem = N % 10;
            if (rem == 4)
            {
                val += 1;
            }
            N = N / 10;
        }
        cout << val << endl;
    }
    return 0;
}