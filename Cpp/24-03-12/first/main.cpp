#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "請輸入一個數字:";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "你輸入了1" << endl;
        break;
    case 2:
        cout << "你輸入了2" << endl;
        break;
    case 3:
        cout << "你輸入了3" << endl;
        break;
    case 4:
        cout << "你輸入了4" << endl;
        break;
    case 5:
        cout << "你輸入了5" << endl;
        break;

    default:
        cout << "輸入錯誤" << endl;
        break;
    }
    return 0;
}