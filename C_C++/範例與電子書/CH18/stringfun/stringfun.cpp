#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string str("C++�O��T���{���y���I");
	int s, e;
	cout << "�r���X�G" << str << endl;
	cout << "�r����סG" << str.length() << endl;
	cout << "�п�J�n�q�ĴX�Ӧr�}�l�R���G";
	cin >> s;
	cout << "�аݭn�R���X�Ӧr�G";
	cin >> e;
	str.erase(s, e);	//�Nstr�r�ꤤ��s�Ӧr�}�l�R��e�Ӧr
	cout << "�r��R����G" << str << endl;
	string i_str;
	cout << "�п�J�n���J���r��G" ;
	cin >> i_str;
	string f_str;
	cout << "�аݭn���J�����r��᭱�G";
	cin >> f_str;
	int n = str.find(f_str);
	str.insert(n + f_str.length(), i_str, 0, i_str.length()); //�bstr�r�ꤤ���w����m���J�l�r��
	cout << "�r���s�G" << str << endl;
	system("PAUSE");
	return 0;
}
