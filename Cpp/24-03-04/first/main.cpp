// �q������16-19�����Ʀr�A���ϥΪ̲q

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
    cout << "�п�J16-19�����Ʀr�G";
    cin >> guess;
    if (guess > 19 || guess < 16)
    {
        cout << "�A��J���~�d��";
    }
    else if (guess == number)
    {
        cout << "�A�q��F!";
    }
    else
    {
        cout << "��p�A�A�q���F!";
    }

    return 0;
}