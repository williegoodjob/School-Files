#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "�п�J�@�Ӿ��:";
    cin >> n;
    cout << "n���}�ڸ��O" << setiosflags(ios::fixed) << setprecision(3) << sqrt(n) << endl;
    cout << "n��3����O" <<setiosflags(ios::fixed) << setprecision(0) << pow(n, 3) << endl;
}