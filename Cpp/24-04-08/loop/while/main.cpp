#include <iostream>

using namespace std;
int main()
{
    int data[] = {5, 23, 54, 11, 55, -10, 4, 59, 56, 67};
    int i = 0;
    while(i < sizeof(data) / sizeof(int))
    {
        cout << data[i] << endl;
        i++;
    }
}