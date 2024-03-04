#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string suits[4] = {"梅花", "方塊", "紅心", "黑桃"};
string ranks[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
string pool[52];
string user[4][13];
int main()
{
    for (int i = 0; i < 52; i++)
    {
        pool[i] = suits[i / 13] + ranks[i % 13];
    }

    srand(time(NULL));
    for (int i = 0; i < 52; i++)
    {
        int index = rand() % 52;
        swap(pool[i], pool[index]);
    }

    for (int i = 0; i < 52; i++)
    {
        int suit = i / 13;
        int rank = i % 13;
        if (i < 13)
        {
            user[0][i] = pool[i];
        }
        else if (i < 26)
        {
            user[1][i - 13] = pool[i];
        }
        else if (i < 39)
        {
            user[2][i - 26] = pool[i];
        }
        else
        {
            user[3][i - 39] = pool[i];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "第" << i + 1 << "個人:";
        for (int j = 0; j < 13; j++)
        {
            cout << user[i][j] << ",";
        }
        cout << endl;
    }

    return 0;
}