#include <stdio.h>
#include <time.h>


int main()
{
 
 

	int ticketAll; //이용권    
	int ticketTime, ticketTimeCase; //주간 야간 이용권   
	int ticketAmount; //티켓 발행 갯수  
	int inputYear; //태어난 년월일  
	int age, ageCase; // 나이
	int discount; //우대 
	int ticketIssue; //티켓발행
	int ticketPrice,  totalTicketPrice;
	int todayDate, idFront, idFrontMonth, idFrontDay, idBack, idBackFirst, yyyymmdd, again, counter;
	int goAgain; 
	
	
	int ticketTimeCaseArr[10]={0}, discountArr[10]={0}, ageCaseArr[10]={0}, ticketPriceArr[10]={0},ticketAmountArr[10]={0};
	

	const int ALLDAYADULT = 59000, ALLDAYTEEN = 52000, ALLDAYKID = 47000, ALLDAYBABY = 15000; // 파크+박물관 + 주간 
	const int ALLAFTERADULT = 48000, ALLAFTERTEEN= 42000, ALLAFTERKID = 36000, ALLAFTERBABY = 15000; // 파크+박물관 +야간 
    const int DAYADULT = 56000, DAYTEENAGER =50000, DAYKID =46000, DAYBABY =15000;  // 파크 + 주간 
	const int AFTERADULT = 45000, AFTERTEEN = 40000, AFTERKID = 35000, AFTERBABY = 15000; //파크 + 야간
	const int BABYFREE = 0;

	
 // 현재 날짜 구하기 //  //time_t base = 0;  //1970년임   현재날짜를 넣고 싶다면 base에 time(NULL)을 넣어주면 된다.
	time_t timer;
	struct tm* t;                    
	time_t base = time(NULL);	
	t = localtime(&base);
	
	

	         	
	do{//다시 진행하기 
	
		
	do{
		//변수 초기화 
	ticketAll=0, ticketTime=0, discount=0, ageCase = 0, ticketPrice =0, ticketAmount=0, idFront=0, idBack=0;
	
	do{
	printf("\n=====================티켓발행=======================\n");	
	
	printf("\n"); 
		
	printf("이용권을 선택하세요.\n");
	printf("1. 종합이용권(놀이공원+민속박물관)\n 2.기본이용권(놀이공원)\n" );
	scanf("%d", &ticketAll);
	printf("\n");
	
 			if(!(ticketAll==1 || ticketAll== 2 )){
 				printf("선택이 옳바르지 않습니다.\n");
			 }
	}while(ticketAll>2); 

	do{
	printf("권종을 선택하세요: \n");
	printf(" 1.1Day(주간권-하루종일)\n 2.4Ater(야간권-4시 이후 입장)\n ");
	scanf("%d",&ticketTime);
	printf("\n");
	
	 		if(!(ticketTime==1 || ticketTime== 2 )){
 				printf("선택이 옳바르지 않습니다.\n");
			 }
	}while(ticketTime>2); 

//주민번호 입력 받기 , 변수 계산 (반장님) 
		do {
			printf("\n주민등록번호를 입력해주세요. ('-'대신 한칸 띄워주세요. ex) 051225 3152135)\n");
			scanf("%6d %7d",&idFront, &idBack);
			
			idBackFirst = idBack/1000000;
			idFrontMonth = (idFront/100)%100;
			idFrontDay = idFront%100;
			//윤년이 아닌 경우의 2월 29일은 미분류 상 태 
			if(idBackFirst >4 || idBackFirst<1 || idFrontDay>31 || idFrontDay<1 || idFrontMonth >12 ||
					idFrontDay <1 || idBack > 9999999 || idFront>999999 ||(idFrontMonth = 2 && idFrontDay>29)) {
				printf("양식에 맞게 다시 입력해주세요.\n\n");
			}
		} while(idBackFirst >4 || idBackFirst<1 || idFrontDay>31 || idFrontDay<1 || idFrontMonth >12 ||
					idFrontDay <1 || idBack > 9999999 || idFront>999999 ||(idFrontMonth = 2 && idFrontDay>29)) ;
    printf("\n");
    
    
    //우대
	 
    do{  
	printf("우대사항을 선택하세요.(나이 우대는 자동처리)\n 1.없음\n 2.장애인\n 3.국가유공자\n 4.다자녀\n 5.임산부\n");
	scanf("%d", &discount);
	printf("\n");

	
	 		if(discount >=6){
 				printf("선택 가능한 사항이 없습니다.\n");
			 }
	
	}while(discount>=6);
	
	//구매갯수
	 
	do{   
	printf("몇개를 주문하시겠습니까? (최대 10개)\n");
	scanf("%d", &ticketAmount);	
	printf("\n");
	
	 		if(ticketAmount >=11){
 				printf("구매가능갯수를 초과하였습니다.\n");
			 }
	}while(ticketAmount>=11); 

   //시간 입력 
	todayDate= (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;  //20220101 형태로 변형 
			
    //1900년생, 2000년생 분류
		if (idBackFirst ==3 || idBackFirst == 4) { //2000년대생 
				yyyymmdd = idFront + 20000000;
		} else {                  //1900년대생 
				yyyymmdd = idFront + 19000000;
		} 
		
	//만 나이 계산 
			ageCase = (todayDate - yyyymmdd)/10000;

    // 나이 범위  
	
	
	if( age>=20 ){
		ageCase = 1;  //성인요금 
	}
	else if( 13>=age && age<=18 ){
		ageCase = 2;  //청소년요금 
	}
	
	else if( 3>=age && age<=12 ){
		ageCase = 3; //어린이요금 
	}
	
	else if( age>=65){
		ageCase = 4; //  65세 이상
		   
		
          }
	
	else if( age == 0){
		ageCase = 5; // 0개월~12개월 미만  
	}
	
	
	
	//티켓 구매 
	
	if( ticketAll==1 && ticketTime==1 ){
		ticketTimeCase = 1; // 놀이공원 + 박물관 + 1day 
	}
	else if( ticketAll==1 && ticketTime==2 ){
		ticketTimeCase = 2; // 놀이공원+ 박물관 + after
	}
	
	else if( ticketAll==2 &&  ticketTime==1 ){
		ticketTimeCase = 3; // 놀이공원 + 1day
	}
		
	else if( ticketAll==2 &&  ticketTime==2 ){
		ticketTimeCase = 4; // 놀이공원 + after 
	}
	

	
	if(ageCase == 1){ //성인요금
	 
		if(ticketTimeCase ==1){
			ticketPrice =  ALLDAYADULT * ticketAmount;
		}
		else if(ticketTimeCase ==2){
			ticketPrice = ALLAFTERADULT * ticketAmount;
		}
		else if(ticketTimeCase ==3){
			ticketPrice =  DAYADULT * ticketAmount;
		}
		else{
		
			ticketPrice = AFTERADULT * ticketAmount;
		}
	} 
	else if(ageCase == 2 ){ //청소년요금
	 
		if(ticketTimeCase ==1){
			ticketPrice = ALLDAYTEEN * ticketAmount;
		}
		else if(ticketTimeCase ==2){
			ticketPrice = ALLAFTERTEEN * ticketAmount;
		}
		else if(ticketTimeCase==3){
			ticketPrice = DAYTEENAGER * ticketAmount;
		}
		else{
			ticketPrice = AFTERTEEN * ticketAmount;		
		}
	} 
	else if(ageCase == 3 ){ // 어린이요금
	 
		if(ticketTimeCase ==1){
			ticketPrice = ALLDAYKID * ticketAmount;
		}
		else if(ticketTimeCase ==2){
			ticketPrice = ALLAFTERKID * ticketAmount;
		}
		else if(ticketTimeCase ==3){
			ticketPrice = DAYKID * ticketAmount;
		}
		else {
			ticketPrice = AFTERKID * ticketAmount;			
		}
	} 
	else if(ageCase == 4 ){  // 65세이상 요금
	 
		if(ticketTimeCase ==1){
			ticketPrice = ALLDAYKID * ticketAmount;
		}
		else if(ticketTimeCase ==2){
			ticketPrice = ALLAFTERKID * ticketAmount;
		}
		else if(ticketTimeCase ==3){
			ticketPrice = DAYKID * ticketAmount;
		}
		else{
			ticketPrice = AFTERKID * ticketAmount;			
		}
	}
		
	else if(ageCase == 5 ){  // 베이비 요금 
	 
		if(ticketTimeCase==1){
			ticketPrice = ALLDAYBABY * ticketAmount;
		}
		else if(ticketTimeCase ==2){
			ticketPrice = ALLAFTERBABY * ticketAmount;
		}
		else if(ticketTimeCase ==3){
			ticketPrice = DAYBABY * ticketAmount;
		}
		else {
			ticketPrice = AFTERBABY * ticketAmount;		
		}
	} 
			
		//12개월 미만의 경우
	if ( age == 0) {
			ticketPrice = 0;
			ageCase = 5;
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
		printf ("\n가격은 %d원 입니다.\n",ticketPrice);
	}
	
 	
	
	
	//선택사항 별, 행렬에 담기
		ticketTimeCaseArr[counter] = ticketTimeCase;
		discountArr[counter] = discount;
		ageCaseArr[counter] = ageCase;
		ticketPriceArr[counter] = ticketPrice;
		ticketAmountArr[counter]= ticketAmount;
		totalTicketPrice += ticketPrice;
	
//counter에 1추가, 초기값은 0 
		counter++; 
		
		//이어서 예매할지 선택 
		printf("\n이어서 이용권을 구매하시겠습니까?\n1.예\n2.아니요\n");
		scanf("%d",&again); 
		
		//변수 초기화 
		 
	} while(again == 1);
	
	
	
	printf("\n이용해주셔서 감사합니다.\n");
	FILE *filePointer = fopen("report.csv", "a");
	
	
	// 영수증 출력
	printf("\n\n===================================== 하하하하 =====================================\n") ;
	printf("%s %s %s\t %s \t\t%s\n\n","선택사항","연령","매수","가격","우대사항");
	for (int i =0; i<counter; i++) {
		fprintf(filePointer, "%d, %d, %d, %d, %d, %d, %d, %d\n", 
							t->tm_year + 1900,t->tm_mon + 1, t->tm_mday,
							ticketTimeCaseArr[i], discountArr[i], ageCaseArr[i], ticketAmountArr[i], ticketPriceArr[i]);
		  												
		  											
		
		switch (ticketTimeCaseArr[i]) {
			case 1:
				printf("%s\t%s","종합이용권","1Day");
				break;
			case 2:
				printf("%s\t%s","종합이용권","After4"); 
				break;
			case 3:
				printf("%s\t%s","파크이용권","1Day");
				break;
			case 4:
				printf("%s\t%s","파크이용권","After4");
				break;
			default:
				break;
		}
		
		switch (ageCaseArr[i]) {
			case 1:
				printf("%s","어  른");
				break;
			case 2:
				printf("%s","청소년");
				break;
			case 3:
				printf("%s","어린이");
				break;
			case 4:
				printf("%s","유  아");
				break;
			case 5:
				printf("%s","노  인");
				break;
			case 6:
				printf("%s","영  아");
				break;
			default:
				break;
		}
		
		printf("%10d%14d원\t",ticketAmountArr[i],ticketPriceArr[i]) ;
		
		switch (discountArr[i]) {
			case 1:
				printf("%s\n","우대사항 없음");
				break;
			case 2:
				printf("%s\n","장애인 우대");
				break;
			case 3:
				printf("%s\n","국가유공자 우대");
				break;
			case 4:
				printf("%s\n","휴가장병 우대");
				break;
			case 5:
				printf("%s\n","임산부 우대");
				break;
			case 6:
				printf("%s\n","다둥이 행복카드 우대");
				break;
			default:
				break;
		}
    }
	printf("\n입장료 총액은 %d원 입니다.", totalTicketPrice);
	printf("\n=====================================================================================\n");
	printf("\n 계속 진행(1: 새로운 주문, 2: 프로그램 종료)\n");
    scanf("%d", &goAgain);
    
    counter = 0; //변수 초기화 
    totalTicketPrice =0;
    }while(goAgain == 1);
		return 0; 



}







