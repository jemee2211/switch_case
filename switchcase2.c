#include<stdio.h>
main(){
	
	char a,b;
	
	printf("INFO ABOUT RECHARGE\n");
	printf("1. = prepaid\n2. = Postpaid\n\n");
	printf("ENTER THE PLAN : ");
	scanf("%c",&a);
	
	printf("ENTER THE NUMBER : ");
	scanf("%c",&b);
	
	switch(a) {
		
		default:
			
			printf("INVALID INFO");
break;

 		case 1:
 			
 		printf("1. = 500rs \ Year \n 2. = 800rs \ Year \n 3. = 1200\ Year\n ");	
 
 		
		printf("ENTER YOUR NUMBER");
		scanf("%c",&a);	 
		
		switch(a) {
			
			case 1:
				printf("500rs Recharge Done ");
						
			case 2:
				printf("800rs Recharge Done ");
						
			case 3:
				printf("1200rs Recharge Done ");



		}

		
  }
	               	}
