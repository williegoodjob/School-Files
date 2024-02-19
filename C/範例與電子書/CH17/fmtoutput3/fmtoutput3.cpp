#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv) {    
    cout << "\t==�Ʀr�t�ή榡�ƿ�X==\n";
	cout << "�Q�i�" << 12345 << "����  �K�i�";
	cout << oct << 12345 << endl;		//�H�K�i���X�A�L�X30071
	cout.unsetf(ios::basefield);		//�����K�i���X
	cout << "�Q�i�" << 12345 << "����Q���i�";
	cout << hex << 12345 << endl;		//�H�Q���i���X�A�L�X3039
	cout.unsetf(ios::basefield);		//�����Q���i���X
	cout << showbase;					//�]�w��X���㪺�Ʀr�t�ζi��
	cout << "�Q�i�" << 12345 << "����  �K�i�";
	cout << oct << 12345 << endl;		//�H�K�i���X�A�L�X030071
	cout.unsetf(ios::basefield);		//�����K�i���X
	cout << "�Q�i�" << 12345 << "����Q���i�";
	cout << hex << 12345 << endl;		//�H�Q���i���X�A�L�X0x3039
	cout << noshowbase ;			    //������X���㪺�Ʀr�t�ζi��
	cout.unsetf(ios::basefield);		//�����Q���i���X

	cout << "\n\t==�B�I�Ʈ榡�ƿ�X==\n";
	cout << 9876.54321 << endl;			//�L�X9876.54
	cout << fixed << 9876.54321 << endl;	//�H�B�I�ƿ�X�A�L�X9876.543210
    //�]�w�B�I�ƥH��ǰO���覡��X�A�L�X9.876543e+003
	cout << scientific << 9876.54321 << endl;
	cout.unsetf(ios::floatfield);		//�����H�B�I�ƪ��覡�ӿ�X

	cout << "\n\t==���L��Ʈ榡�ƿ�X==\n";
	bool t=true, f=false;	//�ŧi���L���O�ܼ�, �䤤t��true, f��false
	cout << "�u�O " << t << endl;		//�L�X 1
	cout << "���O " << f << endl;		//�L�X 0
	cout << boolalpha ;					//�]�w�H���L�Ȫ��覡�ӿ�X
	cout << "�u�O " << t << endl;		//�L�X true
	cout << "���O " << f << endl;		//�L�X false
	cout << noboolalpha;				//�����H���L�Ȫ��覡�ӿ�X

	cout << "\n\t==���t�ƭȮ榡�ƿ�X==\n";
	cout << +9876.54321 << endl;		//�L�X9876.54
	cout << -9876.54321 << endl;		//�L�X-9876.54
	cout << showpos;					//����Ƥ��e�[�W�u+�v�A�_�h�[�W�u-�v
	cout << +9876.54321 << endl;		//�L�X+9876.54
	cout << -9876.54321 << endl;		//�L�X-9876.54
	cout << noshowpos;					//����showpos���]�w

	cout << "\n\t==����榡�ƿ�X==\n";
	//��X30�Ӧr���A�ó]�w�a�����
	cout << setw(30) << left << "C&C++�{���]�p�g��";
	cout << endl;						//����
	cout.unsetf(ios::adjustfield);		//�����a�����
	//��X30�Ӧr���A�ó]�w�a�k���
	cout << setw(30) << right << "C&C++�{���]�p�g��";
	cout << endl;						//����
	cout.unsetf(ios::adjustfield);		//�����a�k���
	cout << endl;						//����
    	
	system("PAUSE");
    return 0;
}

