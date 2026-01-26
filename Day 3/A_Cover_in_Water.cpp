// // Solution 1:
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         int is_three_empty = 0;
//         int empty_idx = 0;

//         // 3 ta empty ase kina chek
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
//             {
//                 is_three_empty = 1;
//                 empty_idx = i;
//                 break;
//             }
//         }

//         // 3 ta empty thakle output 2 return.
//         if (is_three_empty)
//         {
//             cout << 2 << endl;
//             continue;
//         }

//         // koita empty ase, sei number ta return
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '.')
//             {
//                 count++;
//             }
//         }

//         cout << count << endl;
//         continue;
//     }

//     return 0;
// }

// Solution 2:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int consecutive = 0;
        int empty_idx = 0;

        // 3 ta empty ase kina chek
        for (char c : s)
        {
            if (c == '.')
            {
                consecutive++;
                empty_idx++;

                if (consecutive == 3)
                    break;
            }
            else
            {
                consecutive = 0;
            }
        }

        if (consecutive == 3)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << empty_idx << endl;
        }
    }

    return 0;
}