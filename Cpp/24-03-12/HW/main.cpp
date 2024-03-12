
#include <iostream>
#include <conio.h>

using namespace std;

#define LENGTH 6

char pwd[LENGTH] = {1, 2, 3, 4, 5, 6};
char ckpwd[LENGTH];

void setPWD(int length);
bool checkPWD(int length);

int main()
{
    int mode = 0;
    bool flag = true;
    while (flag)
    {
        cout << "請輸入模式(1-2):";
        cin >> mode;
        switch (mode)
        {
        case 1:
            setPWD(LENGTH);
            break;
        case 2:
            if (checkPWD(LENGTH))
            {
                cout << "密碼正確" << endl;
                flag = false;
            }
        }
    }
    return 0;
}

void setPWD(int length)
{
    cout << "請輸入6個字的密碼" << endl;
    for (size_t i = 0; i < length; i++)
    {
        pwd[i] = getch();
        cout << "x";
    }
    cout << endl;
}

bool checkPWD(int length)
{
    cout << "請輸入6個字的密碼" << endl;
    bool flag = true;
    for (size_t i = 0; i < length; i++)
    {
        ckpwd[i] = getch();
        cout << "x";
        if (pwd[i] != ckpwd[i])
        {
            flag = false;
        }
    }
    cout << endl;
    return flag;
}
