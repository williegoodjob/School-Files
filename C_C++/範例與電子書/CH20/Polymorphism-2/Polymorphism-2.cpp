#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Employee{
protected:
	//_salary�ŧi��Protected�O�@�h��,�������i�H�b�l���O���ϥ�
	int _salary;
public:
	int GetSalary(){
		return _salary;
	}
	void SetSalary(int value){
		if ((value >= 20000) & (value <= 40000)){
			_salary = value;
		}
		else{
			_salary = 20000;
		}
	}
	void ShowTotal(){	//ShowTotal��k���\�Q�мg
		cout << "���~�G" <<  GetSalary() << endl;
	}
};

class Manager : public Employee{
public:
	int Bonus;
	int GetSalary(){
		return _salary; //�ϥΤ����O��m_salary
	}
	void SetSalary(int value){
		if ((value >= 30000) && (value <= 60000)){
			_salary = value;
		}
		else{
			_salary = 30000;
		}
	}
	void ShowTotal(){				//�мgEmployee��ShowTotal��k
		Employee::ShowTotal();	//�I�s�����OEmployee��ShowTotal��k
        cout << "�~��+�����@�G" << (Bonus + GetSalary()) << endl;
	}
};

int main(int argc, char** argv) {
	Employee tom;
	tom.SetSalary( 40000);
	cout << "tom���u�~��" <<  tom.GetSalary() << endl;
	tom.ShowTotal();
	cout << "===================\n\n";
	Manager peter;
	peter.SetSalary(70000);
	cout << "peter�g�z�~��" << peter.GetSalary() << endl;
	peter.Bonus = 30000;
	cout << "peter�g�z����" << peter.Bonus << endl;
	peter.ShowTotal();
    system("PAUSE");
	return 0;
}
