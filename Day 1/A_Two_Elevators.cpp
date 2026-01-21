#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        // lift 1
        int lift1_total_time = a - 1;

        // lift 2
        int lift2_total_time = abs(b - c) + (c - 1);

        // result print
        if (lift1_total_time < lift2_total_time)
        {
            cout << 1 << endl;
        }
        else if (lift1_total_time > lift2_total_time)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}