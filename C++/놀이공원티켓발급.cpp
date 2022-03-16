#include <stdio.h>
#include <time.h>
int main()
{
 
	int ticketAll; //이용권    
	int selectTime; //주간 야간 이용권   
	int ticketNum; //티켓 발행 갯수 
	int fullYear; //주민번호
	int currentDate; //현재날짜 
	int age; // 나이
	int fee; // 요금
	int discount; //우대 
	int ticketIssue; //놀이공원+민속박물 
	
	const int dayAdult = 56000, dayTeenAger =50000, dayKid =46000, dayBaby =15000, afterAdult = 45000, afterTeen = 40000, afterKid = 35000, afterBaby = 15000; //파크
	const int allDayAdult = 59000, allDayTeen = 52000, allDayKid = 47000, allDayBaby = 15000, allAterAdult = 48000, allAfterTeen = 42000, allAfterKid = 36000, allAfterBaby = 15000; //파크+박물관
                    	
	time_t timer;
	struct tm* t;
	timer = time(NULL); // 1970년 1월 1일 0시 0분 0초부터 시작하여 현재까지의 초
   	t = localtime(&timer); // 포맷팅을 위해 구조체에 넣기
	
	printf("이용권을 선택하세요.\n 1.놀이공원+민속박물관\n 2.놀이공원\n" );
	scanf("%d", &ticketAll);
	printf("\n");
	printf("권종을 선택하세요: \n 1.1Day(주간권-하루종일) \n 2.4Ater(야간권-4시 이후 입장)\n ");
	scanf("%d",&selectTime);
	printf("\n");
	printf("주민번호를 입력해주세요.(예: 19990909)\n");
	scanf("%d", &fullYear);
	printf("몇개를 주문하시겠습니까? (최대 10개)\n");
	scanf("%d", &ticketNum);	
	printf("\n");
	printf("우대사항을 선택하세요.(나이 우대는 자동처리)\n 1.없음\n 2.장애인\n 3.국가유공자\n 4.다자녀\n 5.임산부\n");
	scanf("%d", &discount);
	printf("\n");
	
	currentDate= (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;
	currentDate= (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;
	
	//만 나이 계산 
	age = (currentDate - fullYear)/10000;
	
	//티켓 구매  
	if(ticketNum<=10){
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
		
	else{
		ticketIssue = 4; // 놀이공원 + after 
	}
	
	
	// 나이 범위  
	
	if( age>=20){
		age = 1;
	}
	else if ( 14>=age && age<20 ){
		age = 2;
	}
	
	else if( 3<=age && age<13 ){
		age = 3;
	}
	
	else{
		age= 4;
	}
	

	//나이 + 종류 
	if( age == 1 ){ //성인
	 
		if(ticketIssue==1){
			fee = allDayAdult; 
		}
		else if(ticketIssue = 2){
			fee = allAterAdult;
		}
		else if(ticketIssue = 3){
		 	fee = dayAdult;
		}
		else{
			fee = afterAdult;
		}
	} 
	
	if( age == 2){ //청소년
	 
		if(ticketIssue==1){
			fee = allDayTeen;
		}
		else if(ticketIssue==2){
			fee = allAfterTeen;
		}
		else if(ticketIssue==3){
			fee = dayTeenAger;
		}
		else{
			fee = afterTeen;
		}
	}
	
	if( age == 3){ //어린이 노약자
	 
		if(ticketIssue==1){
			fee = allDayKid;
		}
		else if(ticketIssue==2){
			fee = allAfterKid;
		}
		else if(ticketIssue==3){
			fee = dayKid;
		}
		else{
			fee = afterKid;
		}
	}
	
	if( age == 4){ //애기
	 
		if(ticketIssue==1){
			fee = allDayBaby;
		}
		else if(ticketIssue==2){
			fee = allAfterBaby;
		}
		else if(ticketIssue==3){
			fee = dayBaby;
		}
		else{
			fee = afterBaby;
		}
	}
	
	if ( age == 0) {   //12개월 미만 
		fee = 0;
	} 
	
	//임장료에 우대사항 적용 
	if (discount == 2) {
		fee = fee/2 ; // 모든 티켓 50퍼 우대 
	} else if (discount == 3) {
		fee = fee/2 ;
	} else if (discount == 4 && ticketAll==1) { //종합이용권만 우대 
		fee = fee * 0.51;
	} else if (discount == 5 && ticketAll==1 ) {
		fee = fee/2;
	} else if (discount == 6 && ticketAll==1) {
		fee = fee*0.7;
	} else {
		printf("\n우대 사항이 없습니다.\n");
	}
	
	//입장료 총액 출력.
	if (fee==0){
		printf("\n무료 입장 입니다.\n");
	}
	else {
		printf ("\n가격은 %d원 입니다.\n",fee) ;
	}
	
	

	return 0; 
	
 }


