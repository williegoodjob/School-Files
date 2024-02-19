#include <cstdlib>
#include <iostream>
using namespace std;

class Stack{	//�w�qStack���|���O
private:
    //�ŧi�T�ӫ���
    //full��ܰ��|����, empty��ܰ��|����, ptr��ܥثe���|���쪺��m 
    int *full, *empty,  *ptr; 

public:
    Stack(int n){	//�غc��
        ptr = new int[n];	//�ʺA�t�m���|���ƶq 
        full = ptr + n ;  	//�]�wfull���|���� 
        empty = ptr;      	//�]�wempty���|���� 
    }
    void Push(int n){	//�N��Ʃ�J���|��Push()��k 
        if (ptr==full){   	//�P�_���|�O�_�w�� 
            cout << "    ���|���F";
            return;               
        }
        *ptr = n ;       	//�N��Ʀs�J�ثe���Ы��V���|����m 
        cout << "    ��J" << *ptr << "����|��";
        ptr++;          	 	//���|���Ц�m���W�� 
    }
    void Pop(){	//�N���|����Ƽu�X��Pop()��k 
        if (ptr==empty){  	//�P�_���|�O�_�w�� 
            cout << "    ���|�ŤF";
            return;                          
        }
        ptr--;          		//���|���Ц�m���U��
        cout << "    �Ѱ��|���X��ơG" <<  *ptr;         
    }
    void PrintStack(){//�L�X���|���Ҧ���ƪ�PrintStack()��k
    	if (ptr==empty){ 	//�P�_���|�O�_�w��
            cout << "    ���|���S�����";
            return;                
        }
        cout << "    �L�X���|���e�G";
        int *lptr;
        lptr = ptr;
        do{     	//�ѥثe���|��m�}�l�L��Ƥ@���L����|���� 
            if (lptr!=empty){
                lptr--;
                cout << *lptr << " ";
            }
            else{
                break;
            }
        }while(1);
        cout << endl;
    }
};

int main(int argc, char** argv) {
   cout << "�п�J���|�i�s�񪺼ƶq�G";
   int num ;
   cin >> num;
   Stack s(num) ;     //�إ�Stack���|����s�As����i�s��num�Ӿ�Ƹ�� 
   int sel, input;
   do{
        cout << "\n\n=== ���| (Stack) �ާ@��� ===\n";
        cout << "    1. ��J��� (Push) \n";
        cout << "    2. ���X��� (Pop) \n";
        cout << "    3. ��ܰ��|��� \n";
        cout << "    4. ���� \n";
        cout << "============================= \n";
        cout << "    �п�� [1 - 4]�G";
        cin >> sel ;         
        if (sel == 1){
            cout << "    �п�J�n��J���|����ơG";
            cin >> input ;
            s.Push(input);    	//�Ninput��J����Ʃ�J���|�� 
        }
        else if (sel == 2){
            s.Pop();          	//�Ѱ��|���u�X��� 
        }
        else if (sel == 3){
            s.PrintStack();   	//�L�X���|���Ҧ������ 
         }
         else if (sel == 4){
            cout << "    ���}�t�� \n";
            break;
         }
         else{
            cout << "    === �п�J 1-4 !! \n";
         }
   } while (1);
   system("PAUSE");
   return 0;
}
