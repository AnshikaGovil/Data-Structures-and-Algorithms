#include <stack>
#include <string>
using namespace std;

struct Bracket
{
    Bracket(char type, int position) : type(type),
                                       position(position)
    {
    }

    bool match(char c)
    {
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int no = 1;
        string str;
        getline(cin, str);
        stack<Bracket> bracket;
        for (int i = 0; str[i] != '\0'; i++)
        {
            char next = str[i];
            if (next == '(')
            {
                bracket.push(Bracket(next, no));
                cout << no << " ";
                no++;
            }
            else if (next == ')')
            {
                Bracket bc = bracket.top();
                bracket.pop();
                if (bc.match(next))
                {
                    cout << bc.position << " ";
                }
            }
        }

        cout << endl;
    }
    return 0;
}