#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int weight, height;
    float w, h;
    float BMI;
    cout << "BMI計算器" << endl;
    cout << "請輸入身高(cm): ";
    cin >> height;
    cout << "請輸入體重(kg):";
    cin >> weight;
    w = (float)weight;
    h = (float)height;
    h = h / 100;
    BMI = w / pow(h, 2);
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "BMI=" << BMI << endl;
    return 0;
}