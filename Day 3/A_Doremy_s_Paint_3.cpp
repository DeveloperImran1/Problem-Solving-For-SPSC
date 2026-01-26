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
        map<int, int> mp;
        while (n--)
        {
            int val;
            cin >> val;
            mp[val]++;
        }

        if (mp.size() > 2)
        {
            cout << "No" << endl;
            continue;
        }

        if (mp.size() == 2)
        {
            vector<int> v;
            for (auto p : mp)
            {
                v.push_back(p.second);
            }

            if (abs(v[0] - v[1]) > 1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}