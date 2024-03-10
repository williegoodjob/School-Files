#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int size;
    cout << "請輸入一個整數:";
    cin >> size; 
    for (int i = -size; i < size; i++)
    {
        int count = size - abs(i);
        for(int j=0; j < size - count; j++)
        {
            cout << " ";
        }
        
        string space = "";
        for (int j = 0; j < count; j++)
        {
            space += " *";
        }
        cout << space << endl;
    }
    return 0;
}