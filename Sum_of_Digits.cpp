#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, N;
    cin >> t;
    while (t--)
    {
        cin >> N;
        int num, sum = 0;
        while (N != 0)
        {
            num = N % 10;
            sum += num;
            N = N / 10;
        }
        cout << sum << endl;
    }
    return 0;
}