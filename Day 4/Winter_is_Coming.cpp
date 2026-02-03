#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int tem[n];
        for (int i = 0; i < n; i++)
        {
            cin >> tem[i];
        }

        int count = 0;
        int is_wear = false;

        for (int i = 0; i < n; i++)
        {
            if ((tem[i] < a) && (is_wear == false))
            {
                count++;
                is_wear = true;
            }
            else if ((tem[i] > b) && (is_wear == true))
            {
                // count++;
                is_wear = false;
            }
        }
        cout << count << endl;
    }

    return 0;
}