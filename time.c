#include <stdio.h>
#include <Windows.h>
int main()
{
    int min,i;

 printf("�����������:");
 scanf("%d",&min);
 min-=1;
 for (; min >= 0; --min)
{
    i = 60;
    for (; i >= 0; --i)
    {
         printf("��ʣ %d ���� %d �� ����\n", min, i);//���ʣdu��ʱ��
         Sleep(1000);//��ʱ������zhiʱһ��
         system("cls");
    }
}
    printf("��ʱ����\n");
    system("PAUSE");
    return 0;
};
