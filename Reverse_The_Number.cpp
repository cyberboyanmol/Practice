#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t, N;
    cin >> t;
    while (t--)
    {
        cin >> N;
        string str;
        str = to_string(N);
        reverse(str.begin(), str.end());
        ll l = str.length();
        ll Num = stoi(str);
        cout << Num << endl;
    }
    return 0;
}