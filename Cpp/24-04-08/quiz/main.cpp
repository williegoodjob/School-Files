#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string str = "±i¤T;abc@123.com;1400";
    istringstream iss(str);
    string token;
    while (getline(iss, token, ';'))
    {
        istringstream iss2(token);
        string token2;
        while (getline(iss2, token2, '@'))
        {
            cout << token2 << endl;
        }
    }
    return 0;
}