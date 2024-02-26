#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int weight, height;
    float w, h;
    float BMI;
    cout << "本程式會自動計算BMI值" << endl;
    cout << "請輸入你的體重(kg):";
    cin >> weight;
    cout << "請輸入你的身高(cm):";
    cin >> height;
    w = (float)weight;
    h = (float)height;
    h = h / 100;
    BMI = w / pow(h, 2);
    cout << setiosflags(ios::fixed) << setprecision(1);
    cout << "BMI=" << BMI << endl;
    return 0;
}