#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    set<int> s1, s2;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s1.emplace(x);
        }
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            s2.emplace(y);
        }

        //  cout << *s1.begin() + 2 << endl;
        // int arr[2 * n];
        // for (int i = 0; i < 2 * n; i = i + 2)
        // {
        //     int w = (*s1.begin() + i);
        //     arr[i] = w;
        // }
        // for (int i = 1; i < 2 * n; i = i + 2)
        // {
        //     int v = (*s2.begin() + i);
        //     arr[i] = v;
        // }

        set<int>::iterator s4 = s2.begin();

        for (set<int>::iterator s3 = s1.begin(); s3 != s1.end() && s4 != s2.end(); s3++, s4++)
        {
            cout << *s3 << " " << *s4 << " ";
        }
        cout << "\n";
        s1.clear();
        s2.clear();
    }

    return 0;
}
