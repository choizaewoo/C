#include <stdio.h>

int main()
{
	int inputYear = 1900, inputMonth = 1;
	int leapYear=1;
	int days;
	int dayName;
	int maxDay;
	
    printf("년도를 입력하세요:\n");
    scanf("%d", &inputYear);
    printf("월을  입력하세요:\n");
    scanf("%d", &inputMonth);
    

	days = (inputYear - 1900) * 365; // 1900년 부터 입력받은 inputYear까지 몇년 지났는지 확인
	
	for(int index = 1901; index < inputYear; index++) // 윤년이 몇개 있나?//if...() 윤년 확인 코딩..
	{
		if( (inputYear%4==0) && (inputYear%100 !=0) ||( inputYear%400==0) ){	
			
			days++; //윤년이 있는 해에는 366일 이므로.. 
		}
	 } 

	dayName = days % 7; 	//무슨 요일 ? // 0~6(일~토)까지 나옴 
	dayName++; // 0~6(월 ~일) => 1~7(월~ 일)
	if(dayName == 7)
	{
		dayName = 0;
	}
	 
	
	printf("%5s %5s %5s %5s %5s %5s %5s\n","일","월","화","수","목","금","토"); 
	printf("================%d년 %d월===============\n", inputYear, inputMonth);
	 
	  if(leapYear==0){
	  	
	  }
	
	
	
	
	for(int index = 0; index < dayName; index++){
		printf("%5s ", "");
	}
	
	for(int index = 1, enter = dayName +1; index <= 31; index++, enter++){
		printf("%5d ", index);
		if(enter % 7 == 0){
			printf("\n");
		}
		}
		

	
	return 0; 

}
  
