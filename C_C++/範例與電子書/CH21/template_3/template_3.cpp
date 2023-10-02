#include <cstdlib>
#include <iostream>
#include<iomanip>
#include<string>

using namespace std;
template<class T>
class Student
{
private:
	 string Name;
	 T Height, Weight;
public:
	 Student(string n, T h, T w)
	 {
		Name=n;
		Height=h;
		Weight=w;
	 }
	 void Show()
	 {
		cout << Name << "�������O"  << Height << 
		   ",�魫�O" << Weight << endl;
	}
	void GetMax(T a, T b)
	{
		T max;
		if(a>b)
		{
			max=a;
		}
		else
		{
			max=b;
		}
		cout << Name << "��X" << a << ", " 
			 << b << "�������̤j�Ƭ�" << max << "\n\n";  
	}
};

int main(int argc, char** argv) {
	Student<int> peter("���o", 164, 50);
	peter.Show ();
	peter.GetMax(5, 2);
	Student<double> david("�j��", 170.5, 65.33);
	david.Show();
	david.GetMax(5.3, 9.8);
 	system("PAUSE");	
	return 0;
}
