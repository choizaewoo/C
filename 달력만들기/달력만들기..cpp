#include <stdio.h>

int main()
{
	int inputYear = 2022, inputMonth = 1; 
	int leapYear;
	int days, dayName;
	int maxDay;
	 
	// 1900년 부터 입력받은 inputYear까지 몇년 지났는지 확인
	days = (inputYear - 1900) * 365;
	// 윤년이 몇개 있나?
	for(int index = 1901; index < inputYear; index++)
	{
		 //if...() 윤년 확인 코딩..
		if( (inputYear%4==0) && (inputYear%100 !=0) ||( inputYear%400==0) ){
				
			printf("1월 : 31일");
			
		}
	 } 

	//무슨 요일 ?
	dayName = days % 7; // 0~6까지 나옴 
	
	printf("%d", dayName);
	
	
	
	switch(leapYear)
	{
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10:
        case 12:
            maxDay = 31;
            printf("해당 %d 년도의 %d 월 마지막 말일은:%d 일 입니다:",inputYear,inputMonth,maxDay);
            break;
		        case 2 :
		            if((inputYear%4==0)&&(inputYear%100!=0)||(inputYear%400==0)){
		                leapYear = 29;
		                printf("해당 %d년의 %d월 말일은 %d 입니다",inputYear,inputMonth,maxDay);
		                    break;
		            } else {
		                leapYear=28;
		                printf("해당 %d년의 %d월 말일은 %d 입니다",inputYear,inputMonth,maxDay);
		                    break;
		            }
        
        case 4: case 6 :case 9 : case 11 :
            maxDay = 30;
            printf("해당 %d 년도의 %d 월 마지막 말일은:%d 일 입니다:",inputYear,inputMonth,maxDay);
            break;
	}
	
	return 0; 
}
