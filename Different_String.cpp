/*
**********************************************************
* AUTHOR   : ANMOL GANGWAR               * *    *****    *
* LANGUAGE : c++14,c++17                * * *   * ***    *
* IDE      : VS CODE ,codechef(ide)    *     *  *****    *
**********************************************************
*/
#include <bits/stdc++.h>
#define ll long long
#define v_pair vector<pair<ll, ll>>
#define vec vector<ll>
#define for1(i, a, b, k) for (int i = a; i < b; i += k)
#define for2(i, a, b, k) for (ll i = b; i > a; i -= k)
#define for3(i, n, k) for (ll i = 1; i <= n; i += k)
#define for4(i, n, k) for (ll i = n; i >= 0; i -= k)
#define srt(ar) ar.begin(), ar.end()
#define srt2(ar) ar.begin(), ar.end(), greater<pair<ll, ll>>()
#define pb push_back
#define emb emplace_back
#define em emplace
#define in insert
#define tc(t) while (t--)
#define vs vector<string>
using namespace std;

// int findRandom()
// {
//     int num = ((int)rand() % 2);

//     return num;
// }

// string generateBinaryString(int N)
// {
//     srand(time(NULL));

//     string S = "";

//     for (int i = 0; i < N; i++)
//     {

//         int x = findRandom();

//         S += to_string(x);
//     }
//     // string str2 = S;
//     return S;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc(t)
    {
        int N;
        cin >> N;
        vs str(N);
        for (int i = 0; i < N; i++)
        {
            cin >> str[i];
        }
        string str1;
        // str1 = generateBinaryString(N);
        // for (int i = 0; i < N; i++)
        // {
        //     if (str[i] != str1)
        //     {
        //     }
        //     else
        //     {
        //         cout << str1 << endl;
        //         break;
        //     }
        // }
        for1(i, 0, N, 1)
        {
            if (str[i][i] == '0')
            {
                str1 += '1';
            }
            else
            {
                str1 += '0';
            }
        }
        cout << str1 << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// typedef long long ll;
// using namespace std;

// int main()
// {
//     int testcase;
//     cin >> testcase;
//     while (testcase--)
//     {
//         int i, n;
//         cin >> n;
//         vector<string> str(n, ".");
//         for (i = 0; i < n; i++)
//         {
//             cin >> str[i];
//         }
//         string ans = "";
// for (i = 0; i < n; i++)
// {
//     if (str[i][i] == '0')
//     {
//         ans += '1';
//     }
//     else
//     {
//         ans += '0';
//     }
// }
// cout << ans << endl;
// }
//     return 0;
// }