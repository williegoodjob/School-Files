#include <cstdlib>
#include <iostream>

using namespace std;
class Car  {
private:
	int _x, _y;
public:
	void Move(int vX, int vY) {		//�w�qcar���O�֦�Move��k
		_x = vX;
		_y = vY;
	}
};

int main(int argc, char** argv) {
 	Car Benz ;
	Benz.Move (100, 200);
  	system("PAUSE");
  	return 0;
}
