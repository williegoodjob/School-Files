#include <cstdlib>
#include <iostream>

using namespace std;

class Car{
private:
	int _speed ;

public:
	// ���󪺫غc�� #1       
	Car()  {
		_speed = 0;
		cout << "��l�ƫ�t�� = " <<  _speed << endl;
	}
	// ���󪺫غc�� #2  
	Car(int vSpeed)  {
		_speed = vSpeed;
		cout << "��l�ƫ�t�� = " <<  _speed << endl;
	}
	// ���󪺸Ѻc��
	~Car()  {
		cout << "���l��������F ..." << "\n\n";
	}
};

void DoSomething()
{
	cout << "�i�J�{�ǡA�ëŧi BMW ���� ...\n";
	Car BMW(10) ;	// �����16~19��t����Ȫ��غc�� 
	cout << "BMW ����ŧi�����A�ǳ����}��k ...\n";
 } // BMW����O���禡���ϰ��ܼơA���}���禡��BMW����|�Q�����A���ɰ���21~23��

int main(int argc, char** argv) {
 	DoSomething();
	cout << "�ŧi Benz ���� ..\n";
	Car Benz ;
	cout << "Benz ����ŧi���� ..\n";
    system("PAUSE");
    return 0;
}
