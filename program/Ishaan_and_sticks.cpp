#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp, f = 0, max = 0, nn;
        cin >> n;
        map<int, int> hm;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            hm[temp]++;
        }
        map<int, int>::iterator itr;
        for (itr = hm.begin(); itr != hm.end(); ++itr)
        {
            //cout<<itr->first<<" "<<itr->second;
            if (itr->second >= 4)
            {
                temp = itr->first * itr->first;
                if (temp > max)
                {
                    max = temp;
                    nn = itr->second / 4;
                }
            }
        }
        if (max == 0)
            cout << -1;
        else
            cout << max << " " << nn;

        cout << endl;
    }
    return 0;
}