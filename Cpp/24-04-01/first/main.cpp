#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string str = "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20";
    // ¤À³Î¦r¦ê¥H³r¸¹
    istringstream iss(str);
    string token;
    while (getline(iss, token, ','))
    {
        cout << token << endl;
    }
}
