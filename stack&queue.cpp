#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        st.emplace(x);
    }
    // cout << st.top();
    // // st.pop();
    // cout << st.top();

    // while (st.top() != 4)
    // {
    //     st.pop();
    // }

    // while (!st.empty())
    // {
    //     st.pop();             // clearing the stack;
    // }
    if (!st.empty())
    {
        cout << st.top();
    }
    return 0;
}