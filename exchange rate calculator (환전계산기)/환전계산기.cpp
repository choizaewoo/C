#include <stdio.h>

int main()
{
   int won, num, resultChange,returnMoney;
   
   float originalChange;

   const float RATE_USD = 1232.80;
   const float RATE_JPY = 10.60;
   const float RATE_EUR = 1354.62; 
   const float RATE_CNY = 194.97; 
   const float RATE_GBP = 1613.25;


   printf("환전을 원하는 금액을 입력하세요 (원화) :\n");
   scanf("%d", &won);
   
   printf("환전할 원화를 선택하세요\n 1:USD\n 2:JPY\n 3:EUR\n 4:CNY\n 5:GBP\n");
    
    
    
    int num1 = 1;

    scanf("%d", &num1);
     	
		if (num1 == 1)
	{
	
	
}
	
	 	if (num1 == 2)
	
	{
	
	printf("JPY => %f JPY\n", won / RATE_JPY);
	
	
}
	  	
	    if (num1 == 3)
	{
	  
	printf("EUR => %f EUR\n", won / RATE_EUR);
	
}	

        if (num1 == 4)
	
	
	{
	  
	printf("CNY => %f CNY\n", won / RATE_CNY);

}	
        if (num1 == 5)
	{
	

     printf("GBP => %f GBP\n", won / RATE_GBP); 
	
}	
	 
	 return 0;
    
    
   scanf("%d", &won); 
   
   printf("USD => %f USD\n", won / RATE_USD);
   printf("JPY => %f JPY\n", won / RATE_JPY);
   printf("EUR => %f EUR\n", won / RATE_EUR);
   printf("CNY => %f CNY\n", won / RATE_CNY);
   printf("GBP => %f GBP\n", won / RATE_GBP); 	 
   
   
   return 0; 
}

