#include <bits/stdc++.h>
using namespace std;

int main()
{
    // set<int> st;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     st.insert(x);
    // }

    //cout << st.max_size();
    // st.erase(st.begin(), st.begin());
    //  cout << *st.begin() << endl;
    //   cout << st.empty();
    //   auto num = st.find(6); /// if 4 is prsen
    //cout << st.count(4) << endl;
    //cout << st.count(6);
    // //
    // cout << st.size() << endl;
    // for (auto y : st)
    // {
    //     cout << y << " ";
    // }
    // if (num == st.end())
    // {
    //     cout << "6 is not present";
    // }
    // else
    // {
    //     cout << "4 is present";
    // }
    // auto first = st.begin();
    // auto last = st.end();
    // last--;
    // cout << *first << " " << *last;
    //

    //  unordered_set
    unordered_multiset<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.emplace(x);
    }
    cout << s.size() << endl;
    for (auto it : s)
    {
        cout << it << " ";
    }

    return 0;
}