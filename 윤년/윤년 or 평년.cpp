#include <stdio.h>

int main()

{
	int year,isLeapYear;
	printf("���ϴ� �⵵�� �Է��ϼ���:\n");
	scanf("%d", &year);
	printf("%d���� ������ �����ϴ�.\n", year);
	
	
	if((year % 4 == 0)  && (year % 100 !=0) || (year % 400 == 0))
	{  
	 isLeapYear = 1; 
	}	
	 printf("1�� : 31��\n");
	 
	 switch(isLeapYear)
	 {
	 
	 case 0:
     printf("2�� : 28��\n");
     break;
     
     case 1:
	 printf("2�� : 29��\n");
	 break;
	 }
	 
	 
   printf("3�� : 31��\n 4�� : 30��\n 5�� : 31��\n 6�� : 31��\n 7�� : 30��\n 8�� : 31��\n 9�� : 30��\n 10�� : 31��\n 11�� : 30��\n 12�� : 31��\n");
	return 0;
	 
}


// inputYear % 4 == 0  && inputYear % 100 ! =0 || inputYear % 400 == 0  
//&& = and        ||�װ� �ƴϸ� ~  
