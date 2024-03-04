// 電腦產生16-19間的數字，讓使用者猜

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess;
    srand(time(0));
    number = rand() % 4 + 16;
    cout << number << endl
         << endl
         << endl;
    cout << "請輸入16-19間的數字：";
    cin >> guess;
    if (guess > 19 || guess < 16)
    {
        cout << "你輸入錯誤範圍";
    }
    else if (guess == number)
    {
        cout << "你猜對了!";
    }
    else
    {
        cout << "抱歉，你猜錯了!";
    }

    return 0;
}