#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
class Car{
private:
	int _speed ;

public:
	int GetSpeed ();			//�ŧiGetSpeed()��k
	void SetSpeed(int );		//�ŧiSetSpeed()��k
	void Accelerate();			//�ŧiAccelerate()��k
	void Accelerate(int);		//�ŧiAccelerate(int)��k
	void Accelerate(string) ;	//�ŧiAccelerate(string)��k
};

int Car::GetSpeed (){			//�w�qCar���O��GetSpeed()��k
	return _speed;
}

void Car::SetSpeed(int value){	//�w�qCar���O��SetSpeed()��k
	if (value < 0){
		value = 0;
	}
	if (value > 200){
		value = 200;
	}
	_speed = value;
}

void Car::Accelerate(){				//�w�qCar���O��Accelerate()��k
	this->_speed++;
}

void Car::Accelerate(int addSpeed){ //�w�qCar���O��Accelerate(int)��k
	this->_speed += addSpeed;
}

void Car::Accelerate(string S){	    //�w�qCar���O��Accelerate(string)��k
	if (S == "STOP"){
		this->_speed  = 0;
	}
}

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
