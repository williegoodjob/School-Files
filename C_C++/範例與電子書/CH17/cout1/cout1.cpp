#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    char apname[]="C&C++�D�D�C�ֶ�";
	int price=850;
	int number=30;
	double discount=0.8;
	cout << apname << "�O�@�Ӧn�����a��~\n\n";		//��Xapname�r��
	cout << " ���������G"<< price << "\n\n";		//��Xprice���
	cout << " �ǥͧ馩�G"<< discount << "\n\n";		//��Xdiscout�B�I��
	cout << " �ǥͤH�ơG"<< number << "\n\n";		//��Xnumber���
	cout << " �`���G"<< price * discount * number << "\n\n";	//��X�B�⵲�G
	
   	system("PAUSE");
	return 0;
}
