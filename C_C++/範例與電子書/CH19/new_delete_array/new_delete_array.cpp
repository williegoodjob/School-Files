#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
//�w�qStudent�ǥ����O
class Student{
private :
	string _name;
	int _score;
	
public :
	void setName(string value) {	//�]�w�ǥͩm�W 
	    _name = value;
	}
	string getName() {	//���o�ǥͩm�W
	    return _name;
	}
	void setScore(int value){	//�]�w�ǥͦ��Z�d��0~100 
		if (value < 0 ){
			_score=0;
		}
		else if(value > 100) {
			_score = 100;
		}else{
			_score = value;
		}
	}
	int getScore(){	//���o�ǥͦ��Z
		return _score;
	}
	void print(){	// �L�X�ǥͪ��m�W�P���Z 
		cout << getName() << "\t" << getScore()  << endl;		
	}
};

int main(int argc, char** argv) {
	string name;
    int i, score, num;
    cout << "�п�J�ǥͪ��H�ơG";
    cin >> num;
	Student *ptr;				//�ŧiStudent���O������
	//�ʺA�t�m�}�C�Aptr���V����}�C���Ĥ@�Ӥ�������}
	ptr=new Student[num];		//����num�Ӱ}�C����
	cout << "�п�J " << num << " ��ǥͪ��m�W�P���Z\n";
	for (i=0; i<num; i++){
		cout << "�� " << (i+1) << " ��ǥͩm�W�G" ;
		cin >> name;
		ptr->setName(name);     //�ϥΫ��г]�w�m�W 
		cout << "�� "  << (i+1) << " ��ǥͦ��Z�G";
		cin >> score;
		ptr->setScore(score); //�ϥΫ��г]�w���Z 
		ptr++;					//���Щ��U���A�۷��}�C�������U�@�ӵ���
	}
	cout << "\n�L�X�Ҧ��ǥͪ��m�W�P���Z\n";
	cout << "�s��\t�m�W\t���Z\n";
	cout << "==================\n";
	ptr-=num;		//ptr���V����}�C���Ĥ@�Ӥ�������}
	for (i=0; i<num; i++){    
	    //�L�X��i��ǥͪ��m�W�P���Z
		cout <<" " << (i+1) << "\t";
		ptr->print();
		ptr++;					//���Щ��U���A�۷��}�C�������U�@�ӵ���
	}
	system("PAUSE");
	return 0;
}

