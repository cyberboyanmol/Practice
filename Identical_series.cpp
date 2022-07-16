#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int swapping_string(string A, string B, int N)
{

    vector<int> dp(N + 1, 0);

    for (int i = 1; i <= N; i++)
    {

        if (A[i - 1] == B[i - 1])
        {

            dp[i] = dp[i - 1];
        }

        else
        {

            dp[i] = dp[i - 1] + 1;
        }

        if (i >= 2 && A[i - 2] == B[i - 1] && A[i - 1] == B[i - 2])
        {

            dp[i] = min(dp[i], dp[i - 2] + 1);
        }
        }

    return dp[N];
}

int main()
{

    string A, B;

    getline(cin, A);
    getline(cin, B);
    int N = A.length();

    cout << swapping_string(A, B, N);
    return 0;
}
