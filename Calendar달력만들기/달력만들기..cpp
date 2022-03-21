#include <stdio.h>

int main()
{
	int inputYear = 2022, inputMonth = 1; 
	int leapYear;
	int days, dayName;
	int maxDay;
	 
	// 1900�� ���� �Է¹��� inputYear���� ��� �������� Ȯ��
	days = (inputYear - 1900) * 365;
	// ������ � �ֳ�?
	for(int index = 1901; index < inputYear; index++)
	{
		 //if...() ���� Ȯ�� �ڵ�..
		if( (inputYear%4==0) && (inputYear%100 !=0) ||( inputYear%400==0) ){
				
			printf("1�� : 31��");
			
		}
	 } 

	//���� ���� ?
	dayName = days % 7; // 0~6���� ���� 
	
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
            printf("�ش� %d �⵵�� %d �� ������ ������:%d �� �Դϴ�:",inputYear,inputMonth,maxDay);
            break;
		        case 2 :
		            if((inputYear%4==0)&&(inputYear%100!=0)||(inputYear%400==0)){
		                leapYear = 29;
		                printf("�ش� %d���� %d�� ������ %d �Դϴ�",inputYear,inputMonth,maxDay);
		                    break;
		            } else {
		                leapYear=28;
		                printf("�ش� %d���� %d�� ������ %d �Դϴ�",inputYear,inputMonth,maxDay);
		                    break;
		            }
        
        case 4: case 6 :case 9 : case 11 :
            maxDay = 30;
            printf("�ش� %d �⵵�� %d �� ������ ������:%d �� �Դϴ�:",inputYear,inputMonth,maxDay);
            break;
	}
	
	return 0; 
}
