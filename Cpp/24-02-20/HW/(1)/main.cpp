#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    float x1 = 0, x2 = 0;
    cout << "�o�D�O��a*x2+b*x+c=0���{��" << endl;
    cout << "�п�Ja:";
    cin >> a;
    cout << "�п�Jb:";
    cin >> b;
    cout << "�п�Jc:";
    cin >> c;
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    cout << a << "*x2+" << b << "*x+" << c << "=0���ѬO" << x1 << "�P" << x2 << endl;
    return 0;
}