#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float height, weight, BMI;
    cout << "請輸入身高(cm):";
    cin >> height;
    cout << "請輸入體重(kg):";
    cin >> weight;
    height /= 100;
    BMI = weight / (height * height);
    cout << setiosflags(ios::fixed) << setprecision(1);
    cout << "BMI = " << BMI << endl;
    return 0;
}