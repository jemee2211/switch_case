#include<stdio.h>
main(){
	
	char p;
	
	printf("J=january\n F=february\n M=march\n A=april\n m=may\n j=june\n U=july\n a=august\n S=september\n O=october\n N=november\n D=december\n\n");
	
	printf("Enter Months:");
	scanf("%c",&p);
	
	switch(p){
		
		default:
			printf("Invalid Input");
			break;
			
			case 'J':
				printf("january");
				break;
				
			case 'F':
				printf("february");
				break;
				
			case 'M':
				printf("march");
				break;
				
			case 'A':
				printf("april");
				break;
				
			case 'm':
				printf("may");
				break;
		
		    case 'j':
				printf("june");
				break;
				
			case 'U':
				printf("july");
				break;
				
			case 'a':
				printf("august");
				break;
				
			case 'S':
				printf("september");
				break;
				
			case 'O':
				printf("october");
				break;
				
			case 'N':
				printf("november");
				break;
				
			case 'D':
				printf("december");
				break;
	}
	
	
	
}
