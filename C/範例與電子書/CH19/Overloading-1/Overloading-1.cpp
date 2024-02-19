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
	Car Benz;
	Benz.SetSpeed (0);
	cout << "�{�b�t��:" << Benz.GetSpeed() << endl;
	cout << "�[�t ...\n";
	Benz.Accelerate();
	cout << "�{�b�t��:" << Benz.GetSpeed() << endl;
	cout << "�[�t 10 ...\n";
	Benz.Accelerate(10);
	cout << "�{�b�t��:" << Benz.GetSpeed() << endl;
	cout << "���� ...\n";
	Benz.Accelerate("STOP");
	cout << "�{�b�t��:" << Benz.GetSpeed() << endl;
   	system("PAUSE");
   	return 0;
}

