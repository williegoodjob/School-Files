#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    float xd=0, xf=0;
    cout << "輸入a,b,c三個數" << endl;
    cout << "a=" << endl;
    cin >> a;
    cout << "b=" << endl;
    cin >> b;
    cout << "c=" << endl;
    cin >> c;
    xd = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    xf = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    cout << "xd=" << xd << endl;
    cout << "xf=" << xf << endl;
    return 0;
}