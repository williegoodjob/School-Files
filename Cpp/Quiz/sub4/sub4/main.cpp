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
        cout << " �O�Ʀr";
    else
        cout << " ���O�Ʀr";
    return 0;
}
