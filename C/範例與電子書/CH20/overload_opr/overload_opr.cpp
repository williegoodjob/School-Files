#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Point{
private:
	int x, y;
public:
	Point();
	Point operator+(Point);		//�h��+�G���B��l
	Point operator+(int);		//�h��+�G���B��l
	Point operator++();			//�h��+�@���B��l(�e�m�B��)
	void getxy();
	void setxy(int, int);
};

Point::Point(){
	x=0;
	y=0;
}

Point Point::operator+(Point obj){
	Point t;		
	t.x=x+obj.x; 
	t.y=y+obj.y;	
	return t;		
}

Point Point::operator+(int n){
	Point t;
	t.x=x+n;
	t.y=y+n;
	return t;
}

Point Point::operator++(){
	x=x+1;
	y=y+1;
	return *this;
}
 
void Point::getxy(){
	cout << "x�y��:" << x << "\ty�y��:" << y << endl;
 }
 
void Point::setxy(int x1, int y1){
	x=x1;
	y=y1;
}

int main(int argc, char** argv) {
	Point p1, p2, p3;
	p1.setxy (10,20);
	cout << "obj1�y��->" ;
	p1.getxy ();
	p2.setxy (15,23);
	cout << "obj2�y��->" ;
	p2.getxy ();
	p3.setxy (0,0);
	cout << "obj3�y��->" ;
	p3.getxy ();
	cout << endl;
	p3=p1+p2;
	cout << "p1+p2=p3\np3�y��->" ;
	p3.getxy ();
	cout << endl;
	p3=p3+6;
	cout << "p3+6\np3�y��->" ;
	p3.getxy ();
	cout << endl;
	++p3;
	cout << "++p3\np3�y��->" ;
	p3.getxy ();
    system("PAUSE");
    return 0;
}
