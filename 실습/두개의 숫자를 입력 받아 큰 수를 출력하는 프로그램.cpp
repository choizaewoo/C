#include <stdio.h>

int main()
// �� ���� ���ڸ� �Է� �޾� ū ���� ����ϴ� ���α׷� �ۼ�
{
	int numberA, numberB;
	printf("���� A �Է�:");
	scanf("%d", &numberA);
	
	printf("���� B �Է�:");
	scanf("%d", &numberB);
	
	if(numberA > numberB)
	{
		printf("ū ���ڴ� %d �Դϴ�.", numberA);
	}
	else if(numberA < numberB)
	{
		printf("ū ���ڴ� %d �Դϴ�.", numberB);
	}
	 	
	 	return 0;
	 	
 } 
