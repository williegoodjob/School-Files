 #include <cstdlib>
 #include <iostream>
 #include <string>
 using namespace std;

 class Student{
 public:
	int No;					// �ΨӰO���O�ĴX��ǥ�
	static int Total ;		// �R�A��Ʀ���(�R�A�ܼ�)�A�O���ǥ��`��
	string Name;
	static void ShowTotalStudents()	{	// �R�A�����禡(�R�A��k)
		cout << "�{�b�@�� " << Total << " ��ǥ�" << endl ;
	}
	void ShowMe(){ 
		cout << this->Name << " �O�� " << No << " ��ǥ͡C" << endl;
	}
	Student(string vStudentName){		//�غc��
		Total += 1;
		No = Total;		//�O���ǥ��`��
		Name = vStudentName;
	}
	~Student(){			//�Ѻc��
		Total -= 1;
	}
 };

int Student::Total = 0;	//Student���O���R�A��Ʀ����ǥ��`�Ƭ�0

int main(int argc, char** argv) {
 	Student::ShowTotalStudents();	// �I�s�R�A�����禡
	Student Jack("Jack") ;			// �ŧi�Ĥ@��ǥ�
	Jack.ShowMe();
	Student Winnie("Winnie") ;		// �ŧi�ĤG��ǥ�
	Winnie.ShowMe();
	Student Max("Max");				// �ŧi�ĤT��ǥ�
	Max.ShowMe(); 
	Student::ShowTotalStudents();
	Student *MyStudent;				// �ŧi�@�� Student ���Ѧ�
	MyStudent = &Winnie;			// �NMyStudent���V�ǥ�Winnie 
	MyStudent->ShowMe();
	Student::ShowTotalStudents();		
	system("PAUSE");
	return 0;
}
