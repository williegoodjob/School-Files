#include <stdio.h> //�]�t���n���禡�w
#include <stdlib.h>//�]�t���n���禡�w

int main()//�D�{��
{
    for (int i = 1; i <= 9; i++)// �ϥ������j��L�X�@�ӼƦr�T����(���ư���9�� 1~9)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%.1f ", 1.5 + j); // �L�X 1.5 �[�W j ���ȡA�åH�p���I��@�����
        }
        printf("\n"); // ����
    }
    system("pause");//�Ȱ�����
    return 0; //�h�X�ê�^0
}