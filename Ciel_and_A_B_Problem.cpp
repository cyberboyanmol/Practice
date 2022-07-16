#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int sub = A - B;
    if (sub % 10 != 9)
    {
        sub++;
    }
    else
    {
        sub--;
    }
    cout << sub << endl;
    return 0;
}