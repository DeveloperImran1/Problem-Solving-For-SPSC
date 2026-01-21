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

        int sum = a + b;

        int sort_of_a = b - a;
        int baki = (c - sort_of_a) - b;

        // cout << baki << endl;
        if (baki >= 0 && baki % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}