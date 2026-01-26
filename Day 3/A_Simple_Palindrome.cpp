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
        string s = "";
        string vowel = "aeiou";
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            if (idx == 5)
            {
                idx = 0;
            }
            s = s + vowel[idx];
            idx++;
        }
        sort(s.begin(), s.end());

        cout << s << endl;
    }

    return 0;
}