#include <stdio.h>

int main()
{
	int inputYear = 1900, inputMonth = 1;
	int leapYear=1;
	int days;
	int dayName;
	int maxDay;
	
    printf("�⵵�� �Է��ϼ���:\n");
    scanf("%d", &inputYear);
    printf("����  �Է��ϼ���:\n");
    scanf("%d", &inputMonth);
    

	days = (inputYear - 1900) * 365; // 1900�� ���� �Է¹��� inputYear���� ��� �������� Ȯ��
	
	for(int index = 1901; index < inputYear; index++) // ������ � �ֳ�?//if...() ���� Ȯ�� �ڵ�..
	{
		if( (inputYear%4==0) && (inputYear%100 !=0) ||( inputYear%400==0) ){	
			
			days++; //������ �ִ� �ؿ��� 366�� �̹Ƿ�.. 
		}
	 } 

	dayName = days % 7; 	//���� ���� ? // 0~6(��~��)���� ���� 
	dayName++; // 0~6(�� ~��) => 1~7(��~ ��)
	if(dayName == 7)
	{
		dayName = 0;
	}
	 
	
	printf("%5s %5s %5s %5s %5s %5s %5s\n","��","��","ȭ","��","��","��","��"); 
	printf("================%d�� %d��===============\n", inputYear, inputMonth);
	 
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
  
