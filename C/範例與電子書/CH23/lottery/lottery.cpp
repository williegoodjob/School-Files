#include <cstdlib>
#include <ctime>
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;
//PrintOut�ΨӦL�Xvector�e�������Ҧ����� 
void PrintOut(vector<int>& container)
{
    if(container.empty())
    {
        cout << "�ثe�|���}��";
    }
    else
    {
        vector<int>::iterator ptr;
        for(ptr=container.begin();ptr!=container.end();ptr++)
        {
            cout << *ptr << "  ";
        }
        cout << "\n\n";
    }
}


int main(int argc, char** argv) {
	// �ϥ�vector�e������إ�num[0]~num[48]�Ψө�m�j�ֳz���X1~49 
	vector<int> num(49);
	int i;
	for(i=0; i<num.size(); i++){
		num[i]=(i+1);
	}
	// �ϥ�vector�e������إ�lotteryNum[0]~lotteryNum[5]�Ψө�m���ӱo�����X 
	vector<int> lotteryNum(6);
	srand((unsigned)time(NULL));  //�ήɶ���üƺؤl 
	int k, index;
	// ��num[0]~num[48]���üƧ䤻�Ӥ������lotteryNum[0]~lotteryNum[5] 
	for(k = 0; k<lotteryNum.size(); k++){		
		index = rand() % num.size(); // ���Ͷü�index 
		lotteryNum[k]=num[index];    // �N��index�Ӫ�num���lotteryNum[k] 
		num.erase(num.begin()+index); // ����num[index]�A��ܳQ�⤤�����X���|�A�X�{ 
	}	
	cout<< "�j�ֳz�}�����X(���Ƨ�)" << endl;
	//�L�XlotteryNum�e���������� 
	PrintOut(lotteryNum);
	//�ϥ�sort()�禡�NlotteryNum�����Ҧ������i�滼�W�Ƨ� 
	sort(lotteryNum.begin(), lotteryNum.end(), less<int>());
	cout<< "�j�ֳz�}�����X(���W�Ƨ�)" << endl; 
	//�L�XlotteryNum�e���������� 
	PrintOut(lotteryNum);
	system("PAUSE");
	return 0;
}
