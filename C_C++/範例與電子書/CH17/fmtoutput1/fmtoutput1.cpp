#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
   	cout << "\t==�Ʀr�t�ή榡�ƿ�X==\n";
	cout << "�Q�i�" << 12345 << "����  �K�i�";
	cout.setf(ios::oct, ios::basefield);	//�]�w�K�i���X
	cout << 12345 << "\n";				    //�L�X30071
	cout.unsetf(ios::basefield);			//�����K�i���X
	cout << "�Q�i�" << 12345 << "����Q���i�";
	cout.setf(ios::hex, ios::basefield);	//�]�w�Q���i���X
	cout << 12345 << "\n";				    //�L�X3039
	cout.unsetf(ios::basefield);			//�����Q���i���X
	cout.setf(ios::showbase);			    //�]�w��X���㪺�Ʀr�t�ζi��
	cout << "�Q�i�" << 12345 << "����  �K�i�";
	cout.setf(ios::oct, ios::basefield);	//�]�w�K�i���X
	cout << 12345 << "\n";				    //�L�X030071
	cout.unsetf(ios::basefield);			//�����K�i���X
	cout << "�Q�i�" << 12345 << "����Q���i�";
	cout.setf(ios::hex, ios::basefield);	//�]�w�Q���i���X
	cout << 12345 << "\n";				    //�L�X0x3039
	cout.unsetf(ios::basefield);			//�����Q���i���X
	cout.unsetf(ios::showbase);			    //������X���㪺�Ʀr�t�ζi��

	cout << "\n\t==�B�I�Ʈ榡�ƿ�X==\n";
	cout << 9876.54321 << "\n";			    //�L�X9876.54
	cout.setf(ios::fixed, ios::floatfield); //�]�w�H�B�I�ƪ��覡�ӿ�X
	cout << 9876.54321 << "\n";			    //�L�X9876.543210
	//�]�w�B�I�ƥH��ǰO�����覡�ӿ�X
	cout.setf(ios::scientific, ios::floatfield);	
	cout << 9876.54321 << "\n";			   //�L�X9.876543e+003
	cout.unsetf(ios::floatfield);		   //�����H�B�I�ƪ��覡�ӿ�X
	cout << "\n\t==���L��Ʈ榡�ƿ�X==\n";
	bool t=true, f=false;	//�ŧi���L���O���ܼơA�䤤t��true, f��false
	cout << "�u�O " << t << "\n";		  //�L�X 1
	cout << "���O " << f << "\n";		  //�L�X 0
	cout.setf(ios::boolalpha);			  //�]�w�H���L�Ȫ��覡�ӿ�X
	cout << "�u�O " << t << "\n";		  //�L�Xtrue
	cout << "���O " << f << "\n";		  //�L�Xfalse
	cout.unsetf(ios::boolalpha);		  //�����H���L�Ȫ��覡�ӿ�X

	cout << "\n\t==���t�ƭȮ榡�ƿ�X==\n";
	cout << +9876.54321 << "\n";		  //�L�X9876.54
	cout << -9876.54321 << "\n";		  //�L�X-9876.54
	cout.setf(ios::showpos);			  //����Ƥ��e�[�W�u+�v�A�_�h�[�W�u-�v
	cout << +9876.54321 << "\n";		  //�L�X+9876.54
	cout << -9876.54321 << "\n";		  //�L�X-9876.54
	cout.unsetf(ios::showpos);	//����cout.setf(ios::showpos);���]�w

	cout << "\n\t==����榡�ƿ�X==\n";
	cout.width(30);					     //�]�w��ڿ�X�r����30��
	cout.setf(ios::left, ios::adjustfield);	//�]�w�a�����
	cout << "C&C++�{���]�p�g��";
	cout << "\n";						 //����
	cout.unsetf(ios::adjustfield);	     //�����a�����
	cout.width(30);						 //�]�w��ڿ�X�r����30��
	cout.setf(ios::right, ios::adjustfield);	//�]�w�a�k���
	cout << "C&C++�{���]�p�g��\n";
	cout << "\n";						//����
	cout.unsetf(ios::adjustfield);	    //�����a�k���
   	cout << "\n"; 
   	system("PAUSE");
   	return 0;
}

