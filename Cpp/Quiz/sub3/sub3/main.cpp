#include <iostream>

using namespace std;

int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool day4[7] = {0, 0, 0, 0, 1, 0, 0};

int main()
{
    int m = 0, d = 0, dc = 0, tg = 0;
    cout << "�п�J��";
    cin >> m;
    cout << "�п�J��";
    cin >> d;
    for (int mn = 1; mn <= m; mn++)
    {
        if (mn != m)
        {
            for (int i = 1; i <= days[mn - 1]; i++)
            {
                dc++;
                if (dc > 6)
                    dc = 0;
                if (day4[dc])
                    tg++;
            }
        }
        else
        {
            for (int i = 1; i <= d; i++)
            {
                dc++;
                if (dc > 6)
                    dc = 0;
                if (day4[dc])
                    tg++;
            }
        }
    }
    cout << "1/1-" << m << "/" << d << " �`�@ " << tg << "�ӬP���|";
    return 0;
}
