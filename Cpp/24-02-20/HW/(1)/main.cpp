#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    float xd=0, xf=0;
    cout << "��Ja,b,c�T�Ӽ�" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    xd = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    xf = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    cout << "xd=" << xd << endl;
    cout << "xf=" << xf << endl;
    return 0;
}