#include <cstdlib>
#include <iostream>

using namespace std;
class Car  {
private:
	int _speed;

public:
  	int GetSpeed(){
		return _speed;
	}
		
	void SetSpeed(int vSpeed){
		if (vSpeed < 0) {		// �t�פ��o�C�� 0
			vSpeed = 0;		    
		}
		if (vSpeed > 200) {		// �t�פ��o���� 200
			vSpeed = 200;	           
		}
		_speed = vSpeed;
	}
};

int main(int argc, char** argv) {
 	Car Benz ;
	Benz.SetSpeed(500);		// �t�׭ȶW�L 200
	cout << Benz.GetSpeed () << endl;
  	system("PAUSE");
  	return 0;
}
