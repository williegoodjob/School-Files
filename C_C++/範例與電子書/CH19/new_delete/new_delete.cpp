#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Student{
private :
	string _name;
	int _score;
	
public :
	void setName(string value) {
	    _name = value;
	}
	string getName() {
	    return _name;
	}
	void setScore(int value){
		if (value < 0 ){
			_score=0;
		}
		else if(value > 100) {
			_score = 100;
		}else{
			_score = value;
		}
	}
	int getScore(){
		return _score;
	}
	void print(){
		cout << getName() << "\t" << getScore()  << endl;		
	}
	Student()	//�w�]�غc���A�S���޼ƪ��غc��			
	{
	}		
	Student(string name, int score)		//���غc�������ǤJ�m�W�M�~��
	{
		this->setName(name);
		this->setScore(score); 
	}
	~Student(){		//�Ѻc��, ����delete�ɷ|����Ѻc��
		cout << "�ǥ�->" << this->getName() << "�Q�R���F" << endl;
	}
	void ShowStudent(){
		cout << "�m�W�G" << this->getName() << "   ���Z�G" << this->getScore() << endl; 
	}
};

int main(int argc, char** argv) {
 	Student *ptr1, *ptr2;		//�ŧi�ݩ�Student���O��ptr1��ptr2����
	ptr1 = new Student;			//�ϥ�new�ʺA�O�m����,���ɰ���w�]�غc��
	ptr1->setName("�i�L��");	//���w�m�W
	ptr1->setScore(120);		//���w���Z
	ptr1->ShowStudent ();		//����Student���O��ShowStudent()��k
	//�ϥ�new�ʺA�t�m�O����A�öǤJ�m�W�Φ��Z
	ptr2 = new Student("�p�s�k", 80);
	ptr2->ShowStudent ();		//����Student���O��ShowStudent()��k
	cout << "delete ptr1  " ;
	delete ptr1;				//�ϥ�delete�B��l����O����A�ð���Ѻc��
	cout << "delete ptr2  ";
	delete ptr2;				//�ϥ�delete�B��l����O����A�ð���Ѻc��
  	system("PAUSE");
  	return 0;
}
