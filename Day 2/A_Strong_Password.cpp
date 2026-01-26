// // Solution 1:
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string password;
//         cin >> password;

//         int arr[26] = {0};

//         for (int c : password)
//         {
//             arr[c - 97]++;
//         }

//         char empty = 'a';
//         for (int i = 0; i < 26; i++)
//         {

//             if (arr[i] == 0)
//             {
//                 char letter = i + 97;
//                 empty = letter;
//                 break;
//             }
//         }

//         int flag = 0;
//         for (int i = 0; i < password.length(); i++)
//         {

//             if ((password.length() > 1) && (password[i] == password[i + 1]))
//             {
//                 password.insert(i + 1, 1, empty);
//                 cout << password << endl;
//                 flag = 1;
//                 break;
//             }
//         }

//         if (!flag)
//         {
//             password.push_back(empty);
//             cout << password << endl;
//         }
//     }

//     return 0;
// }

// Solution 2: ------------------------->
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string password;
        cin >> password;

        int i;
        for (i = 1; i < password.length(); i++)
        {
            if (password[i] == password[i - 1])
            {
                break;
            }
        }

        if (password[i - 1] == 'a')
        {
            password.insert(password.begin() + i, 'b');
        }
        else
        {

            password.insert(password.begin() + i, 'a');
        }

        cout << password << endl;
    }

    return 0;
}