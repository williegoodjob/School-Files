 #include <cstdlib>
 #include <iostream>
 #include <string>
 using namespace std;

 class Employee{			//�w�qEmployee���u���O
 protected:
	//_salary�ŧi���O�@�h��,�����i�H�b�l���O���ϥ�
	int _salary;
 public:
	int GetSalary(){  
		return _salary;
	}
	void SetSalary(int value){		//�]�w�~������20000~40000
		if ((value >= 20000) && (value <= 40000)){
			_salary = value;
		}
		else{
			_salary = 20000;
		}
	}
 };

 class Manager:public Employee{ //�w�qManager�g�z���O�~�Ӧ�Employee���u���O
 public:
	int Bonus;
	int GetSalary (){
		return _salary;				//�ϥΤ����O��m_salary
	}
	void SetSalary(int value){		//�]�w�~������30000~60000
		if ((value >= 30000) && (value <= 60000)){
			_salary = value;
		}
		else{
			_salary = 30000;
		}
	}
	void ShowTotal(){
		cout << "����~���G" << ( Bonus + GetSalary()) << endl;
	}
 };

int main(int argc, char** argv) {
  	Manager peter;
	peter.SetSalary(70000);
	cout << "peter�g�z�~��" << peter.GetSalary() << endl;
	peter.Bonus = 30000;
	cout << "peter�g�z����" << peter.Bonus << endl;
	peter.ShowTotal();
   	system("PAUSE");
   	return 0;

}
