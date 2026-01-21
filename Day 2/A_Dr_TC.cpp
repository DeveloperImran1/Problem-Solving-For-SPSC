
// // Solution 1: new string create kore count kortesi.
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

//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             string s2 = s;
//             if (s2[i] == '0')
//             {
//                 s2[i] = '1';
//             }
//             else
//             {
//                 s2[i] = '0';
//             }

//             for (char c : s2)
//             {
//                 if (c == '1')
//                 {
//                     count++;
//                 }
//             }
//         }

//         cout << count << endl;
//     }

//     return 0;
// }

// Solution 2: new string create na korei count kortesi.
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

        int count = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                count++;
            }
        }

        int result = 0;
        for (char c : s)
        {
            if (c == '0')
            {
                result += count + 1;
            }
            else
            {
                result += count - 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}