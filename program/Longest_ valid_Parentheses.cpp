#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int count = 0;
        string st;
        getline(cin, st);
        stack<int> s;
        s.push(-1);
        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] == ')' && !st.empty())
            {
                if (st[s.top()] == '(')
                {
                    s.pop();
                    if (!s.empty() && (i - s.top()) > count)
                        count = i - s.top();
                }
                else if (!s.empty())
                {
                    s.pop();
                    s.push(i);
                }
            }
            else
                s.push(i);
        }
        cout << count << endl;
    }
    return 0;
}