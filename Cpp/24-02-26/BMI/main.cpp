#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int weight, height;
    float w, h;
    float BMI;
    cout << "BMI�p�⾹" << endl;
    cout << "�п�J����(cm): ";
    cin >> height;
    cout << "�п�J�魫(kg):";
    cin >> weight;
    w = (float)weight;
    h = (float)height;
    h = h / 100;
    BMI = w / pow(h, 2);
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "BMI=" << BMI << endl;
    return 0;
}