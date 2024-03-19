#include <fstream>
#include <iostream>
#include <conio.h>

using namespace std;

#define LENGTH 4

char pwd[LENGTH];
char ckpwd[LENGTH];

void setPWD(int length);
bool checkPWD(int length);

int main()
{
    ofstream pass("pass.dat");
    if (pass.fail())
    {
        cout << "File open error" << endl;
        exit(1);
    }
    int mode = 0;
    bool flag = true;
    while (flag)
    {
        cout << "1. 設定密碼\n2. 測試密碼\n請選擇[1,2]:";
        cin >> mode;
        switch (mode)
        {
        case 1:
            setPWD(LENGTH);
            break; 
        case 2:
            if (checkPWD(LENGTH))
            {
                cout << "Keyin password correct" << endl;
                flag = false;
            }
            else
            {
                cout << "Keyin password incorrect" << endl;
            }
        }
    }
    return 0;
}

void setPWD(int length)
{
    cout << "請輸入"<< length <<"個字的密碼" << endl;
    for (size_t i = 0; i < length; i++)
    {
        pwd[i] = getch();
        cout << "x";
    }
    cout << endl;
}

bool checkPWD(int length)
{
    cout << "請輸入"<< length <<"個字的密碼" << endl;
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
