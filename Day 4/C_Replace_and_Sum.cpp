// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         int a[n], b[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }

//         while (q--)
//         {
//             int l, r;
//             cin >> l >> r;
//             sort(a, a + n);
//             int a_arr_max = a[n - 1];
//             int new_arr[n];

//             for (int i = 0; i < n; i++)
//             {
//                 new_arr[i] = a_arr_max;
//             }

//             pair<int, int> mx_of_b;

//             for (int i = 0; i < n; i++)
//             {
//                 if (mx_of_b.second <= b[i])
//                 {
//                     mx_of_b = {i, b[i]};
//                 }
//             }

//             for (int i = 0; i <= mx_of_b.first; i++)
//             {
//                 new_arr[i] = mx_of_b.second;
//             }

//             int sum = 0;
//             for (int i = l - 1; i < r; i++)
//             {
//                 sum += new_arr[l];
//             }

//             cout << sum << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// solution 2:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long int> a(n);
        vector<long long int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        long long int new_arr[n];

        for (int i = 0; i < n; i++)
        {
            new_arr[i] = max(a[i], b[i]);
        }
        for (int i = n - 1; i > 0; i--)
        {
            new_arr[i - 1] = max(new_arr[i], new_arr[i - 1]);
        }

        long long int prefix_sum[n + 1];
        prefix_sum[0] = 0;
        for (int i = 0; i < n; i++)
        {
            prefix_sum[i + 1] = prefix_sum[i] + new_arr[i];
        }
        // for (int i = 0; i <= n; i++)
        // {
        //     cout << prefix_sum[i] << " ";
        // }

        while (q--)
        {
            int l, r;
            cin >> l >> r;

            cout << prefix_sum[r] - prefix_sum[l - 1] << " ";
        }

        cout << endl;
    }

    return 0;
}