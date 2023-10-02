#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//�w�qEmployee���u���O
class Employee{
private :
	string _name;
	int _salary;
	
public :
	//�]�w���u�m�W 
	void setName(string value) {
	    _name = value;
	}
	//���o���u�m�W 
	string getName() {
	    return _name;
	}
	//�]�w���u�~��d��22000~60000 
	void setSalary(int value){
		if (value < 22000 || value > 60000){
			_salary = 22000;
		}else{
			_salary = value;
		}
	}
	//���o���u�~�� 
	int getSalary(){
		return _salary;
	}
	// �L�X���u���m�W�P�~�� 
	void print(){
		cout << getName() << "\t" << getSalary()  << endl;		
	}
};

int main(int argc, char** argv) {
	string name;
    int i, salary;
    
	Employee aryEmployee[5];	//�ŧiaryEmployee[0]~aryEmployee[4]
	Employee *ptr;				//�ŧiEmployee���O��ptr����
    ptr = aryEmployee;			//ptr����}�C����aryEmployee[0]����}

	cout << "�п�J 5 ����u���m�W�P�~��\n";
	for (i=0; i<5; i++)	{
		cout << "�� " << (i+1) << " ����u�m�W�G" ;
		cin >> name;
		ptr->setName(name);     //�ϥΫ��г]�w�m�W 
		cout << "�� "  << (i+1) << " ����u�~��G";
		cin >> salary;
		ptr->setSalary(salary); //�ϥΫ��г]�w�~�� 
		ptr++;					//���Щ��U���A�۷��}�C�������U�@�ӵ���
	}
	cout << "\n�L�X�Ҧ����u���m�W�P�~��\n";
	cout << "�s��\t�m�W\t�~��\n";
	cout << "==================\n";
	ptr = aryEmployee;		//ptr����}�C����aryEmployee[0]
	for (i=0; i<5; i++)	{    
	    //�L�X��i����u���m�W�P�~��
		cout <<" " << (i+1) << "\t";
		ptr->print();
		ptr++;					//���Щ��U���A�۷��}�C�������U�@�ӵ���
	}
	system("PAUSE");
	return 0;
}
