#include <bits/stdc++.h>
using namespace std;

// self made dat type struct
struct node
{
    string str;
    int num;
    double doub;
    char y;
    node(str_, num_, doub_, y_)
    {
        str = str_;
        num = num_;
        dooub = doub_;
        y = y_;
    };
    // };
    //array<int, 5> arr;
    int main()
    {
        node anm = node("anmol", 34, 34.0, " ");
        // node anmol;
        // anmol.str = "anmol";
        // cout << anmol.str;
        // node anmol;
        // anmol.N = 3;
        // anmol.arr[N];
        // for (int i = 0; i < 3; i++)
        // {
        //     cin >> anmol.arr[i];
        // }
        // for (int i = 0; i < 3; i++)
        // {
        //     cout << anmol.arr[i];
        array<int, 5> arr;
        arr = {1,
               2,
               3,
               4,
               5};
        // // for (int i = 0; i < 5; i++)
        // // {
        // //     cout << arr.at(i) << " \n";
        // // }
        // // cout << *arr.end();
        // for (auto it = arr.rbegin(); it != arr.rend(); it++)
        // {
        //     cout << *it << " ";
        // }
        for (auto x : arr)
        {
            cout << x << " ";
        }

        return 0;
    }