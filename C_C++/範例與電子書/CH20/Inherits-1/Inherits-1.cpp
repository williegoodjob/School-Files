#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Employee{		//�w�qEmployee���u���O
private :
	int _salary;   	//Employee���u���O��_Salary�~���p������
public:
	int GetSalary()	{	//���o�~����k(�����禡)

		return _salary;
	}
	//�]�w�~����k(�����禡), �~������20000~40000����
	void SetSalary(int value) {
		if (value < 20000) 		//�~���̤�20000
			_salary = 20000;
		else if (value > 40000)		//�~���̦h40000
			_salary = 40000;
		else
			_salary = value;
	}
 };
 //Manager�g�z���O�~�Ӧ�Employee���u���O�A�]���~�Ӧs���v���]��public
 //�]��Manager�l���O��Bonus�MShowTotal()�����i�H�ѥ~�ɪ����s��
 class Manager : public Employee { 
 public :
	int Bonus;			//�[�JBonus�������}����
	void ShowTotal(){  	//�[�J��ܹ�������k(�����禡)
		cout << "����~���G" << ( Bonus + GetSalary()) << endl;
	}
};

int main(int argc, char** argv) {
    Employee tom ;				//�إ�Employee���u���O��tom����
	tom.SetSalary (50000);    	//�]�w�~��
	cout << "tom���u�~��" <<  tom.GetSalary() << endl; 		//����~��
	cout << "================\n\n";
	Manager peter ; 				//�إ�Manager�g�z���Opeter����
	peter.SetSalary(50000);   	//�]�w�~��
	cout << "peter�g�z�~�� " << peter.GetSalary() << endl;	//����~��
	peter.Bonus = 30000;  		//�]�wpeter������30000
	cout << "peter�g�z���� " << peter.Bonus << endl; 		//��ܼ���
	peter.ShowTotal();      	//���peter����~��
   system("PAUSE");
   return 0;
}
