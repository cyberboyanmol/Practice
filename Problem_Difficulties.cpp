#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[4];
    while (t--)
    {
        unordered_map<int, int> um;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            um[arr[i]]++;
        }

        // for (auto it : um)
        // {
        //     cout << it.first << it.second << endl;
        // }
        vector<int> v;
        for (auto it : um)
        {
            v.emplace_back(it.second);
        }
        for (auto it : v)
        {
            cout << v.at(it.second);
        }
        // sort(v.begin(), v.end(), greater<>());
        if (v[0] > 3)
            cout << "0" << endl;
        else if (v[0] > 2)
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}
