#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    char miname[30];			// �ŧiminame�r���}�C(�r��)
	int price;					// �ŧiprice����ܼ�
	double discount;			// �ŧidiscount�B�I�ܼ�
	cout << "�п�J�־��W�١G";
	cin >> miname;				// �N��L��J����ƫ��w��miname
	cout << "�п�J����G";
	cin >> price;				// �N��L��J����ƫ��w��price
	cout << "�п�J�馩�G";
	cin >> discount;			// �N��L��J����ƫ��w��discount
	cout << "\n===�L�X��Ʀp�U===\n";
	cout << miname	<< "�O�@��n�־�~\n";
	cout << " ����G"<< price	<< "\n";
	cout << " �馩�G"<< discount << "\n";
	cout << " �`���G"<< price * discount << "\n";
   	system("PAUSE");
	return 0;
}
