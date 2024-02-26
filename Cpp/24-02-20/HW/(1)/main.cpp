#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    float x1 = 0, x2 = 0;
    cout << "這題是解a*x2+b*x+c=0的程式" << endl;
    cout << "請輸入a:";
    cin >> a;
    cout << "請輸入b:";
    cin >> b;
    cout << "請輸入c:";
    cin >> c;
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    cout << a << "*x2+" << b << "*x+" << c << "=0的解是" << x1 << "與" << x2 << endl;
    return 0;
}