#include <iostream>

using namespace std;
int main()
{
    int data[] = {5, 23, 54, 11, 55, -10, 4, 59, 56, 67};
    for (int i = 0; i < sizeof(data) / sizeof(int); i++)
    {
        cout << data[i] << endl;
    }
}