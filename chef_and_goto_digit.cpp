#include <bits/stdc++.h>
using namespace std;
#define ll long long

// ll getProduct(ll n)
// {
//     ll product = 1;
//     if (n == 0)
//     {
//         return 0;
//     }
//     while (n != 0)
//     {
//         product = product * (n % 10);
//         n = n / 10;
//     }

//     return product;
// }

ll fac(ll n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fac(n - 1);
}

ll countDigit(long long n)
{
    ll count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    ll t, N, num;
    cin >> t;
    while (t--)
    {
        cin >> N;

        ll val, val2, rem, i = 0;
        ll index = 0, product = 1, rem_;
        for (int i = 0; i <= N; i++)
        {
        begin:
            num = i;
            rem_ = num % 10;
            product = product * rem_;
            rem = product;
            num = num / 10;
            if (num > 0)
            {
                goto begin;
            }
            val = countDigit(i);
            val2 = fac(val);
            if (rem >= val2)
            {
                index += 1;
            }
        }
        cout << index << endl;
    }
    return 0;
}