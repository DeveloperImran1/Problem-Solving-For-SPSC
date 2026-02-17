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
        int hype_level = n + 1;
        int arr[hype_level] = {0};
        for (int i = 0; i < hype_level; i++)
        {
            cin >> arr[i];
        }

        vector<int> max_hepes;
        for (int i = 0; i < hype_level - 1; i++)
        {
            int res = max(arr[i], arr[i + 1]);
            max_hepes.push_back(res);
        }
        sort(max_hepes.begin(), max_hepes.end());

        cout << max_hepes[0] << endl;
    }

    return 0;
}