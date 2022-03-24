#include <stdio.h>

int main()

{
	int year,isLeapYear;
	printf("원하는 년도를 입력하세요:\n");
	scanf("%d", &year);
	printf("%d년은 다음과 같습니다.\n", year);
	
	
	if((year % 4 == 0)  && (year % 100 !=0) || (year % 400 == 0))
	{  
	 isLeapYear = 1; 
	}	
	 printf("1월 : 31일\n");
	 
	 switch(isLeapYear)
	 {
	 
	 case 0:
     printf("2월 : 28일\n");
     break;
     
     case 1:
	 printf("2월 : 29일\n");
	 break;
	 }
	 
	 
   printf("3월 : 31일\n 4월 : 30일\n 5월 : 31일\n 6월 : 31일\n 7월 : 30일\n 8월 : 31일\n 9월 : 30일\n 10월 : 31일\n 11월 : 30일\n 12월 : 31일\n");
	return 0;
	 
}


// inputYear % 4 == 0  && inputYear % 100 ! =0 || inputYear % 400 == 0  
//&& = and        ||그게 아니면 ~  
