#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "�п�J�@�ӼƦr:";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "�A��J�F1" << endl;
        break;
    case 2:
        cout << "�A��J�F2" << endl;
        break;
    case 3:
        cout << "�A��J�F3" << endl;
        break;
    case 4:
        cout << "�A��J�F4" << endl;
        break;
    case 5:
        cout << "�A��J�F5" << endl;
        break;

    default:
        cout << "��J���~" << endl;
        break;
    }
    return 0;
}