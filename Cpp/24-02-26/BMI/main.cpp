#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int height, weight;
    float BMI;
    cout << "請輸入身高(cm):";
    cin >> height;
    cout << "請輸入體重(kg):";
    cin >> weight;
    float Hm = height / 100.0;
    BMI = weight / (Hm * Hm);
    cout << setiosflags(ios::fixed) << setprecision(1);
    cout << "BMI = " << BMI << endl;
    return 0;
}