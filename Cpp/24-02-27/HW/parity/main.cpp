#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "請輸入一個整數:";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << "是偶數";
    }
    else
    {
        cout << n << "是奇數";
    }
    return 0;
}
