#include <stdio.h>
#include <time.h>
int main()
{
 
	int ticketAll; //�̿��    
	int selectTime; //�ְ� �߰� �̿��   
	int ticketNum; //Ƽ�� ���� ���� 
	int fullYear; //�ֹι�ȣ
	int currentDate; //���糯¥ 
	int age; // ����
	int fee; // ���
	int discount; //��� 
	int ticketIssue; //���̰���+�μӹڹ� 
	
	const int dayAdult = 56000, dayTeenAger =50000, dayKid =46000, dayBaby =15000, afterAdult = 45000, afterTeen = 40000, afterKid = 35000, afterBaby = 15000; //��ũ
	const int allDayAdult = 59000, allDayTeen = 52000, allDayKid = 47000, allDayBaby = 15000, allAterAdult = 48000, allAfterTeen = 42000, allAfterKid = 36000, allAfterBaby = 15000; //��ũ+�ڹ���
                    	
	time_t timer;
	struct tm* t;
	timer = time(NULL); // 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����Ͽ� ��������� ��
   	t = localtime(&timer); // �������� ���� ����ü�� �ֱ�
	
	printf("�̿���� �����ϼ���.\n 1.���̰���+�μӹڹ���\n 2.���̰���\n" );
	scanf("%d", &ticketAll);
	printf("\n");
	printf("������ �����ϼ���: \n 1.1Day(�ְ���-�Ϸ�����) \n 2.4Ater(�߰���-4�� ���� ����)\n ");
	scanf("%d",&selectTime);
	printf("\n");
	printf("�ֹι�ȣ�� �Է����ּ���.(��: 19990909)\n");
	scanf("%d", &fullYear);
	printf("��� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n");
	scanf("%d", &ticketNum);	
	printf("\n");
	printf("�������� �����ϼ���.(���� ���� �ڵ�ó��)\n 1.����\n 2.�����\n 3.����������\n 4.���ڳ�\n 5.�ӻ��\n");
	scanf("%d", &discount);
	printf("\n");
	
	currentDate= (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;
	currentDate= (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;
	
	//�� ���� ��� 
	age = (currentDate - fullYear)/10000;
	
	//Ƽ�� ����  
	if(ticketNum<=10){
	}
			
	else{
		printf("���Ű��ɰ����� �ʰ��Ͽ����ϴ�.\n");
	}
	 
	
	//Ƽ�� ���� 
	
	if( ticketAll==1 && selectTime==1 ){
		ticketIssue = 1; // ���̰��� + �ڹ��� + 1day 
	}
	else if( ticketAll==1 && selectTime==2 ){
		ticketIssue = 2; // ���̰���+ �ڹ��� + after
	}
	
	else if( ticketAll==2 &&  selectTime==1 ){
		ticketIssue = 3; // ���̰��� + 1day
	}
		
	else{
		ticketIssue = 4; // ���̰��� + after 
	}
	
	
	// ���� ����  
	
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
	

	//���� + ���� 
	if( age == 1 ){ //����
	 
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
	
	if( age == 2){ //û�ҳ�
	 
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
	
	if( age == 3){ //��� �����
	 
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
	
	if( age == 4){ //�ֱ�
	 
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
	
	if ( age == 0) {   //12���� �̸� 
		fee = 0;
	} 
	
	//����ῡ ������ ���� 
	if (discount == 2) {
		fee = fee/2 ; // ��� Ƽ�� 50�� ��� 
	} else if (discount == 3) {
		fee = fee/2 ;
	} else if (discount == 4 && ticketAll==1) { //�����̿�Ǹ� ��� 
		fee = fee * 0.51;
	} else if (discount == 5 && ticketAll==1 ) {
		fee = fee/2;
	} else if (discount == 6 && ticketAll==1) {
		fee = fee*0.7;
	} else {
		printf("\n��� ������ �����ϴ�.\n");
	}
	
	//����� �Ѿ� ���.
	if (fee==0){
		printf("\n���� ���� �Դϴ�.\n");
	}
	else {
		printf ("\n������ %d�� �Դϴ�.\n",fee) ;
	}
	
	

	return 0; 
	
 }


