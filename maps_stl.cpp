#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<string, int> mpp;
    //   for(int i=0; i<5; i++){
    //       string
    //   }

    // mpp.emplace("anmol", 1);

    mpp.emplace("raj", 2);
    mpp.emplace("rohan", 3);
    mpp.emplace("ankit", 4);
    mpp.emplace("anmol", 1);
    mpp.emplace("anmol", 23);

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    // pair<int, int> pr = {1, 2};
    // pair<pair<int, int>, int> pr2 = {{1, 2}, 2};
    // cout << pr2.first.first;
    return 0;
}