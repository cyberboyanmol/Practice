#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a, c, l, r;
        vector<pair<int, int>> arr1;
        vector<pair<int, int>> range;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> c >> l >> r;
            arr1.push_back(make_pair(a, c));
            range.push_back(make_pair(l, r));
        }
        // sort(dish.begin(),dish.end());
        int c_ = 0, d_ = 0;
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (max < arr1[i].first)
            {
                max = arr1[i].first;
                c_ = i;
            }
        }
        if (arr1[c_].first > arr1[c_ + 1].first && arr1[c_].second < arr1[c_ + 1].second)
        {
            arr1[c_].first = range[c_].first;
            d_++;
        }
        int e = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int j = 0;
            if (arr1[j].first == arr1[i + 1].first)
            {
                arr1[i].first = range[i].first + 0.5;
                e++;
                if (range[i].first < arr1[i].first < range[i].second)
                    ;
                d_++;
                j++;
            }
        }
        cout << d_ << endl;
    }
    return 0;
}
