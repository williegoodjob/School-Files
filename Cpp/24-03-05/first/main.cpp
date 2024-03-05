#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 8; i++)
    {
        if (i <= 4)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 4; j > i - 4; j--)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}