#include <cstdlib>
#include <iostream>

using namespace std;
class Car{
private:
	int _speed ;

public:
	int GetSpeed(){ 				//GetSpeed()��k�ΨӨ��o�t���ݩʭ�
		return _speed;
	}
	void SetSpeed(int value){	//SetSpeed()��k�Ψӳ]�w�t���ݩʭȡA�d��0~200
		if (value < 0){
			value = 0;
		}
		if (value > 200) {
			value = 200;
		}
		_speed = value;
	}
    void Accelerate() {
	   	this->_speed ++;		// �t�� + 1
	   	if (_speed > 200) {		// �ˬd�t�פ��i�W�L 200
	    	_speed = 200;	
	   	}
    }	
 };
 
 int main(int argc, char** argv) {
    Car Benz ;				//�ŧiCar���O��Benz����
	Benz.SetSpeed(199);		
	cout << "�{�b�t��:" <<  Benz.GetSpeed() << endl;
	cout << "�[�t ...\n";
	Benz.Accelerate();
	cout << "�{�b�t��:" <<  Benz.GetSpeed() << endl;
	cout << "�[�t ...\n";
	Benz.Accelerate();
	cout << "�{�b�t��:" <<  Benz.GetSpeed() << endl;
    system("PAUSE");
    return 0;
 }


