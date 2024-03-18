#include <iostream>

using namespace std;

int main()
{
    char ch[40];

    for (int i = 0; i < sizeof(ch); i++)
    {
        cin >> ch[i];
    }

    for (int i = sizeof(ch) - 1; i >= 0; i--)
    {
        cout << ch[i];
    }

    return 0;
}