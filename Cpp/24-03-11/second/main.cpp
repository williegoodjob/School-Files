#include <iostream>

using namespace std;

int days_in_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    int month, day, total = 0;
    cout << "月份:";
    cin >> month;
    cout << "日期:";
    cin >> day;
    for (int i = 0; i < month - 1; i++)
        total += days_in_month[i];
    total += day;
    cout << "總共:" << total << "天，星期" << total % 7<< endl;
    return 0;
}