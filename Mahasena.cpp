#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, lucky = 0, unlucky = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            lucky += 1;
        }
        else
        {
            unlucky += 1;
        }
    }
    if (lucky > unlucky)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY" << endl;
    }
    return 0;
}