// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define mod 1000000007

// /********************************spoj problem****************************************/
// int main()
// {
//     ll t, A, B, val = -2, num = 0;
//     cin >> t;
//     while (t--)
//     {
//         cin >> A >> B;
//         ll num1 = A;
//         ll num2 = B;
//         for (ll i = num1; i < num2; i++)
//         {
//             while (i != 0)
//             {
//                 ll rem = i % 10;
//                 if (rem == 9 && rem == 6 && rem == 3)
//                 {
//                     val += 1;
//                 }
//                 i = i / 10;
//             }
//             if (val > 0)
//             {
//                 num += 1;
//             }
//         }
//         cout << num << endl;
//     }
//     return 0;
// }
