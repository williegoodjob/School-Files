#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Car{
private:
	int _speed ;

public:
	int GetSpeed ()	{
		return _speed;
	}
	void SetSpeed(int value){
		if (value < 0){
			value = 0;
		}
		if (value > 200){
			value = 200;
		}
		_speed = value;
	}
	void Accelerate(){
		this->_speed++;
	}
	void Accelerate(int addSpeed){
		this->_speed += addSpeed;
	}
	void Accelerate(string S) {
		if (S == "STOP") {
			this->_speed  = 0;
		}
	}
 };

int main(int argc, char** argv) {
    Car Benz;			//�ŧiCar���O��Benz����
	Car *ptr;			//�ŧiCar���O��ptr���СA����ptr�i���VCar���O����
	ptr = &Benz;		//ptr���VBenz����
	ptr->SetSpeed (0);	//�]��ptr�O���СA�ҥH�i�H�ϥΡu->�v�Ӧs�������禡
	cout << "�{�b�t��:" << ptr->GetSpeed() << endl;
	cout << "�[�t ...\n";
	ptr->Accelerate();
	cout << "�{�b�t��:" << ptr->GetSpeed() << endl;
	cout << "�[�t 10 ...\n";
	ptr->Accelerate(10);
	cout << "�{�b�t��:" << ptr->GetSpeed() << endl;
	cout << "���� ...\n";
	ptr->Accelerate("STOP");
	cout << "�{�b�t��:" << ptr->GetSpeed() << endl;
	system("PAUSE");
	return 0;
}
