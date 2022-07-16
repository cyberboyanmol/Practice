#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    vector<int> s1, s2;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s1.emplace_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            s2.emplace_back(y);
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        vector<int>::iterator s4 = s2.begin();
        for (vector<int>::iterator s3 = s1.begin(); s3 != s1.end() && s4 != s2.end(); s3++, s4++)
        {
            cout << *s3 << " " << *s4 << " ";
        }

        cout << "\n";
    }
    return 0;
}