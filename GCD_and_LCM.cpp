#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, A, B, num;
    cin >> t;
    while (t--)
    {
        cin >> A >> B;
        int hcf, lcm;
        hcf = __gcd(A, B);
        lcm = (A * B) / hcf;
        cout << hcf << " " << lcm << endl;
    }
    return 0;
}