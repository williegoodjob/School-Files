#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Traffic{        
protected:
	static int _miles; 			//_miles�ΨӰO���e�i��������
public:	 
	virtual void SpeedUp()=0;	//SpeedUp���µ����禡�A���Traffic����H���O
};

int Traffic::_miles = 0;		//_miles�R�A������l�Ƭ�0

class Car : public Traffic{
public:
	void SpeedUp(){  			//Car�l���O�����мgSpeedUp()��k
		_miles += 2;
		cout << "�r�p���l, �[�t��, �e�i" << _miles <<"����" << endl;
	}
};

class Plane : public Traffic{
public:
	void SpeedUp(){				//Plane�l���O�����мgSpeedUp()��k
		_miles += 15;
		cout << "�r�p����, �[�t��, �e�i" << _miles << "����" << endl;
	}
};

int main(int argc, char** argv) {
   	Traffic *t;			//t�OTaffic���O���������
	Car myCar ;			//myCar�OCar���������A�~��Taffic
	Plane myPlane ;		//myPlane�OPlane���������A�~��Taffic
	int input;
	while (true){
		cout <<"�аݭn�r�p->1.���l  2.����  ��L.���}�G";
		cin >> input ;
		if (input == 1)	{
			t = &myCar;       	//�}���l, t���Ы��VmyCar������骺��}
		}
		else if (input == 2){
			t = &myPlane;  		//�}����, t���Ы��VmyPlane������骺��}
		}
		else{
			break;
		}
		t->SpeedUp();			//�I�st���Ы��V������骺SpeedUp()��k
		cout << endl;
	}
    system("PAUSE");
    return 0;
}
