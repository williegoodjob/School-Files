#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void swapbyref(int &, int &);
void swapbyadd(int *, int *);

int main(int argc, char** argv) {
	cout << " ==�ϥΰѦҩI�s�i���ƥ洫==" << endl;
	int x, y;
	cout << " �п�J��� x ���ȡG" ;
	cin >> x;
	cout << " �п�J��� y ���ȡG" ;
	cin >> y;
	cout << " x=" << x << ", y=" << y  
	 << ", x��}=" << &x << ", y��}=" << &y << endl;
	swapbyref(x, y);
	cout << " ��ƥ洫����, ���G�p�U" << endl;
	cout << " x=" << x << ", y=" << y  
	 << ", x��}=" << &x << ", y��}=" << &y << endl;
	
	cout << endl << endl;
	
	cout << " ==�ϥζǧ}�I�s�i���ƥ洫==" << endl;
	int k, z;
	cout << " �п�J��� k ���ȡG" ;
	cin >> k;
	cout << " �п�J��� z ���ȡG" ;
	cin >> z;
	cout << " k=" << k << ", z=" << z  
	 << ", k��}=" << &k << ", z��}=" << &z << endl;
	swapbyadd(&k, &z);
	cout << " ��ƥ洫����, ���G�p�U" << endl;
	cout << " k=" << k << ", z=" << z  
	 << ", k��}=" << &k << ", z��}=" << &z << endl;
	system("PAUSE");
	return 0;
}

void swapbyref(int &a, int &b){
	int t;
	cout << " a=" << a << ", b=" << b  
	 << ", a��}=" << &a << ", b��}=" << &b 
	 << ", �i�Jswapbyref()�禡�i���ƥ洫" << endl;
	t=a;
	a=b;
	b=t;
	cout << " a=" << a << ", b=" << b  
	 << ", a��}=" << &a << ", b��}=" << &b 
	 << ", ���}swapbyref()�禡������ƥ洫" << endl;
}

void swapbyadd(int *a, int *b){
	int t;
	cout << " �i�Jswapbyadd()�禡�i���ƥ洫" << endl;
	cout << " a=" << a << ", b=" << b  
	 << " *a=" << *a << ", *b=" << *b  
	 << ", a��}=" << &a << ", b��}=" << &b << endl ;	 
	t=*a;
	*a=*b;
	*b=t;
	cout << " ���}swapbyadd()�禡������ƥ洫" << endl;
	cout << " a=" << a << ", b=" << b  
	 << " *a=" << *a << ", *b=" << *b  
	 << ", a��}=" << &a << ", b��}=" << &b  << endl;
}
