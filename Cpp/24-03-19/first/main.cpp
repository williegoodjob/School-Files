#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
    char password[4];
    int i;
    ofstream pass("password.txt");
    if (pass.fail())
    {
        cout << "File open error" << endl;
        exit(1);
    }
    cout << "½Ð¿é¤J±K½X:";
    for (i = 0; i < 4; i++)
    {
        password[i] = getch();
    }
    pass << password;
    pass.close();
    return 0;
}