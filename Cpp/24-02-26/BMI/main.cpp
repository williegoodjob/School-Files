#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int weight, height;
    float w, h;
    float BMI;
    cout << "���{���|�۰ʭp��BMI��" << endl;
    cout << "�п�J�A���魫(kg):";
    cin >> weight;
    cout << "�п�J�A������(cm):";
    cin >> height;
    w = (float)weight;
    h = (float)height;
    h = h / 100;
    BMI = w / pow(h, 2);
    cout << setiosflags(ios::fixed) << setprecision(1);
    cout << "BMI=" << BMI << endl;
    return 0;
}