#include <iostream>

using namespace std;

int days_in_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    int month, day, total = 0;
    cout << "���:";
    cin >> month;
    cout << "���:";
    cin >> day;
    for (int i = 0; i < month - 1; i++)
        total += days_in_month[i];
    total += day;
    cout << "�`�@:" << total << "�ѡA�P��" << total % 7<< endl;
    return 0;
}