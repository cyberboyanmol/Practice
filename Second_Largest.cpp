#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, A, B, C, arr[3];
    cin >> t;
    while (t--)
    {
        cin >> A >> B >> C;
        arr[0] = A;
        arr[1] = B;
        arr[2] = C;
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }
    return 0;
}