#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int root = sqrt(n);
        cout << round(root) << endl;
    }
    return 0;
}