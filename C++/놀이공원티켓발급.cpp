#include <stdio.h>
#include <time.h>
int main()
{
 
 
 // 현재 날짜 구하기 // 

	struct tm* t;
	//time_t base = 0;  //1970년임   현재날짜를 넣고 싶다면 base에 time(NULL)을 넣어주면 된다. 
	time_t base = time(NULL);
	
	t = localtime(&base);
	
	
	printf(" 현재 날짜: %d %d %d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
 	printf("\n");
 
	int ticketAll; //이용권    
	int selectTime; //주간 야간 이용권   
	int ticketAmount; //티켓 발행 갯수  
	int inputYear; //태어난 년월일 
	int currentDate; //현재날짜 
	int age; // 나이
	int discount; //우대 
	int ticketIssue; //티켓발행 
	int ticketPrice; //티켓요금
	int todayDate; //현재 날짜 

	const int allDayAdult = 59000, allDayTeen = 52000, allDayKid = 47000, allDayBaby = 15000; // 파크+박물관 + 주간 
	const int allAterAdult = 48000, allAfterTeen = 42000, allAfterKid = 36000, allAfterBaby = 15000; // 파크+박물관 +야간 
          const int dayAdult = 56000, dayTeenAger =50000, dayKid =46000, dayBaby =15000;  // 파크 + 주간 
	const int afterAdult = 45000, afterTeen = 40000, afterKid = 35000, afterBaby = 15000; //파크 + 야간
	const int babyFree = 0;

	
	age = (todayDate - inputYear)/ 1000;  
	         	
	
	printf("이용권을 선택하세요.\n 1.놀이공원+민속박물관\n 2.놀이공원\n" );
	scanf("%d", &ticketAll);
	printf("\n");
	printf("권종을 선택하세요: \n 1.1Day(주간권-하루종일) \n 2.4Ater(야간권-4시 이후 입장)\n ");
	scanf("%d",&selectTime);
	printf("\n");
	printf("생년 월 일을  입력하세요: ex) 20220321 \n");
	scanf("%d", &inputYear);
	printf("몇개를 주문하시겠습니까? (최대 10개)\n");
	scanf("%d", &ticketAmount);	
	printf("\n");
	printf("우대사항을 선택하세요.(나이 우대는 자동처리)\n 1.없음\n 2.장애인\n 3.국가유공자\n 4.다자녀\n 5.임산부\n");
	scanf("%d", &discount);
	printf("\n");
	
	
	//티켓 구매  
	if(ticketAmount<=10){
	}			
	else{
		printf("구매가능갯수를 초과하였습니다.\n");
	}
	 
	
	//티켓 구매 
	
	if( ticketAll==1 && selectTime==1 ){
		ticketIssue = 1; // 놀이공원 + 박물관 + 1day 
	}
	else if( ticketAll==1 && selectTime==2 ){
		ticketIssue = 2; // 놀이공원+ 박물관 + after
	}
	
	else if( ticketAll==2 &&  selectTime==1 ){
		ticketIssue = 3; // 놀이공원 + 1day
	}
		
	else if( ticketAll==2 &&  selectTime==2 ){
		ticketIssue = 4; // 놀이공원 + after 
	}
	
	
	// 나이 범위  
	
	if( age>=20 ){
		age = 1;  //성인요금 
	}
	else if( 13>=age && age<=18 ){
		age = 2;  //청소년요금 
	}
	
	else if( 3>=age && age<=12 ){
		age = 3; //어린이요금 
	}
	
	else if( age>=65){
		age = 4; // 만65세 이상 어린이요금   
		
          }
	
	else if( age<1){
		age = 0; // 0개월~12개월 미만  
	}
	

	
	
	//티켓 발행 금액
	if (age == 0){   //12개월 미만 
		ticketPrice = babyFree;
	} 
	
	if(age == 1){
		if(ticketIssue ==1){
			ticketPrice =  allDayAdult * ticketAmount;
		}
		else if(ticketIssue ==2){
			ticketPrice = allAterAdult * ticketAmount;
		}
		else if(ticketIssue ==3){
			ticketPrice =  dayAdult * ticketAmount;
		}
		else if(ticketIssue ==4){
			ticketPrice = afterAdult * ticketAmount;
			
		}
	} 
	if(age == 2 ){
		if(ticketIssue ==1){
			ticketPrice = allDayTeen * ticketAmount;
		}
		else if(ticketIssue ==2){
			ticketPrice = allAfterTeen * ticketAmount;
		}
		else if(ticketIssue ==3){
			ticketPrice = dayTeenAger * ticketAmount;
		}
		else if(ticketIssue ==4){
			ticketPrice = afterTeen * ticketAmount;
			
		}
	} 
	if(age == 3 ){
		if(ticketIssue ==1){
			ticketPrice = allDayKid * ticketAmount;
		}
		else if(ticketIssue ==2){
			ticketPrice = allAfterKid * ticketAmount;
		}
		else if(ticketIssue ==3){
			ticketPrice = dayKid * ticketAmount;
		}
		else if(ticketIssue ==4){
			ticketPrice = afterKid * ticketAmount;
			
		}
	} 
	if(age == 4 ){
		if(ticketIssue ==1){
			ticketPrice = allDayKid * ticketAmount;
		}
		else if(ticketIssue ==2){
			ticketPrice = allAfterKid * ticketAmount;
		}
		else if(ticketIssue ==3){
			ticketPrice = dayKid * ticketAmount;
		}
		else if(ticketIssue ==4){
			ticketPrice = afterKid * ticketAmount;
			
		}
	} 

		
	
	

	//임장료에 우대사항 적용 
	

	if (discount == 2) {
		ticketPrice = ticketPrice/2 ; // 모든 티켓 50퍼 우대 
	} else if (discount == 3) {
		ticketPrice = ticketPrice/2 ;
	} else if (discount == 4 && ticketAll==1) { //종합이용권만 우대 
		ticketPrice = ticketPrice * 0.51;
	} else if (discount == 5 && ticketAll==1 ) {
		ticketPrice = ticketPrice/2;
	} else if (discount == 6 && ticketAll==1) {
		ticketPrice = ticketPrice*0.7;
	} else {
		printf("\n우대 사항이 없습니다.\n");
	}
	
	//입장료 총액 출력.
	if (ticketPrice==0){
		printf("\n무료 입장 입니다.\n");
	}
	else {
		printf ("\n가격은 %d원 입니다.\n",ticketPrice) ;
	}
	
	

	return 0; 
	
 }


