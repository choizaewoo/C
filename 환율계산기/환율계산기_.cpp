#include <stdio.h>

int main()
{
   int won, num, resultChange,returnMoney;

   const float RATE_USD = 1232.80;
   const float RATE_JPY = 10.60;
   const float RATE_EUR = 1354.62; 
   const float RATE_CNY = 194.97; 
   const float RATE_GBP = 1613.25;


   printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ��� (��ȭ) :\n");
   scanf("%d", &won);
   
   printf("ȯ���� ��ȭ�� �����ϼ���\n 1:USD\n 2:JPY\n 3:EUR\n 4:CNY\n 5:GBP\n");
    
   
  int num1 = 1;
  
    scanf("%d", &num1);
     	
		if (num1 == 1)
	{
	 resultChange = won / RATE_USD;  // 26000/1232.80 = 21          
	 returnMoney = ((won / RATE_USD) - resultChange) * RATE_USD;  //(26000-21)*1232.80 = 111.2
	 printf("ȯ�� : %d USD\n", resultChange);   //21
	  // ������ ����  
	
	
}
	
	 	if (num1 == 2)
	
	{
	
	 resultChange = won / RATE_JPY;       
	 returnMoney = ((won / RATE_JPY) - resultChange) * RATE_JPY; 
	 printf("ȯ�� : %d JPY\n", resultChange);   
	  
	
	
}
	  	
	    if (num1== 3)
	{
	  

	resultChange = won / RATE_EUR;           
	 returnMoney = ((won / RATE_EUR) - resultChange) * RATE_EUR; 
	 printf("ȯ�� : %d EUR\n", resultChange);  
	 
	
}	

        if (num1 == 4)
	
	
	{
	  
	
     resultChange = won / RATE_CNY;         
	 returnMoney = ((won / RATE_CNY) - resultChange) * RATE_CNY; 
	 printf("ȯ�� : %d CNY\n", resultChange); 
   	   
	  
}	
        if (num1 == 5)
	{
	

     
	 resultChange = won / RATE_GBP;         
	 returnMoney = ((won / RATE_GBP) - resultChange) * RATE_GBP; 
	 printf("ȯ�� : %d GBP\n", resultChange); 
	
	
}	
	printf("�Ž����� : %d ��\n", (returnMoney/ 10)* 10);  
	 return 0;
    
   scanf("%d", &won); 
   
   printf("USD => %f USD\n", won / RATE_USD);
   printf("JPY => %f JPY\n", won / RATE_JPY);
   printf("EUR => %f EUR\n", won / RATE_EUR);
   printf("CNY => %f CNY\n", won / RATE_CNY);
   printf("GBP => %f GBP\n", won / RATE_GBP);
    	 
   
   
   return 0; 
}



