/* �p������׹��-�򥻽m�ߧ@�~-�@�~6*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/08 10:00*/  
#include <stdio.h> //��ܮw
#include <stdlib.h> //��ܮwint 
int main(void)
{
	int year; //�w�q 
	printf("��J�@�Ӧ褸�~�ơG\n");
	scanf("%d" , &year); //��J�~�� 
	if(year % 400 == 0 )  //�Q400�㰣
			printf("%d�~�O�|�~\n",year);  
	else if(year % 100 == 0) //�Q100�㰣 
			printf("%d�~�O���~\n",year);
	else if(year % 4 == 0) //�Q4�㰣 
			printf("%d�~�O�|�~\n",year);
	else
			printf("%d�~�O���~\n",year); //��L���O���~ 
    system("pause"); //�Ȱ����� 
    return 0; //�^�ǭȬ�0  
}
