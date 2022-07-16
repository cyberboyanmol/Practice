// #include <bits/stdc++.h>
// using namespace std;
//  // pattern 1
//  /*

//           *
//           * *
//           * * *
//           * * * *
//           * * * * *
// */
// int main()
// {
//     for (int j = 1; j <= 5; j++)
//     {
//         for (int i = 1; i <= 5; i++)
//         {
//             if (j >= i)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// // pattern 2
// /*

//                   *
//                 * *
//               * * *
//             * * * *
//           * * * * *
// */
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j >= 6 - i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// pattern 3

// #include <bits/stdc++.h>
// using namespace std;

// /*
//          *****
//           ****
//            ***
//             **
//              *

// */
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j >= i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// pattern 4
/*   

*****
**** 
***  
**   
*

*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j <= 6 - i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// pattern 5
/*
    *    
   ***   
  *****  
 ******* 
*********

// */
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {

//         for (int j = 1; j <= 9; j++)
//         {
//             if (j >= 6 - i && j <= 10 - (6 - i))
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// pattern 6

/*

     *   
    * *  
   * * * 
  * * * *
 * * * * *
// */
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int k;
//     for (int i = 1; i <= 5; i++)
//     {
//         int k = 1;
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j >= 6 - i && j <= 4 + i && k)
//             {
//                 cout << "*";
//                 k = 0;
//             }
//             else
//             {
//                 cout << " ";
//                 k = 1;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// pattern 7

/*

*********
**** ****
***   ***
**     **
*       *



*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {

//         for (int j = 1; j <= 9; j++)
//         {
//             if (j <= 6 - i || j >= 4 + i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// pattern 8
/*
         1
        121
       12321
      1234321
// */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int k = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                cout << k;
                j < 4 ? k++ : k--;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// pattern 9

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= ; i++)
//     {
//         for (int j = 1; j <= ; j++)
//         {
//             if ()
//             {
//                 cout << "*";
//             }

//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return O;
// }