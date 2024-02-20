#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    float xd = 0, xf = 0;
    cout << "輸入a,b,c三個數" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    float temp = pow(b, 2) - 4 * a * c;
    if (temp > 0)
    {
        xd = (-b + sqrt(temp)) / (2 * a);
        xf = (-b - sqrt(temp)) / (2 * a);
        cout << "xd=" << xd << endl;
        cout << "xf=" << xf << endl;
    }
    else
    {
        temp = abs(temp);
        cout << "x=(" << -b << "±" << temp << "i)/" << 2 * a << endl;
    }
    return 0;
}