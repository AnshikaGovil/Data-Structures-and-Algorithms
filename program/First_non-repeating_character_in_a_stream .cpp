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
        char temp;
        map<char, int> hm;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            hm[temp]++;
            if (hm[temp] == 1)
            {
                v.push_back(temp);
            }
            char ch;
            int f = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (hm[v[i]] == 1)
                {
                    ch = v[i];
                    f = 1;
                    break;
                }
            }
            if (f == 0)
                cout << -1 << " ";
            else
                cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}