#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int size;
    cout << "�п�J�@�Ӿ��:";
    cin >> size;
    cout << setiosflags(ios::right);
    for (int i = -size; i < size; i++)
    {
        int count = size - abs(i);
        cout << setw(abs(i) + size);
        for (int j = 0; j < count; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}