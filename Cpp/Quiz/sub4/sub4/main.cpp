#include <iostream>

using namespace std;

int main()
{
    string temp;
    cin >> temp;
    bool flag = 1;
    for (const char c : temp)
    {
        if (!isdigit(c))
        {
            flag = 0;
        }
    }
    cout << temp;
    if (flag)
        cout << " 是數字";
    else
        cout << " 不是數字";
    return 0;
}
