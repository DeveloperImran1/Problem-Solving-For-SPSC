#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x, y;
        cin >> x >> y;

        int screen_1 = ceil(y / 2);
        int res1 = ((screen_1 * 15) - (y * 4));
        float res2 = x - res1;

        // cout << "screen_1 " << screen_1;
        // cout << "res1 " << res1;
        // cout << "res2 " << res2;

        // int cal = ceil(1 / 2);
        // cout << cal << endl;

        if (res2 <= 0)
        {
            cout << screen_1 << endl;
        }
        else
        {
            int res3 = ceil(res2 / 15);
            cout << screen_1 + res3 << endl;
        }
    }

    return 0;
}