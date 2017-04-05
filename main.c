#include <stdio.h>

void one();
void two();

int main() {
	int swt, flag = 1;
	
	printf("Git is cool!\n");
	printf("0: Escape\n");
	printf("1: Tester\n");
	printf("2: Tester\n");
	
	while(flag){
		printf("Enter your function number:\n");
		scanf("%d",&swt);		
		switch(swt){	//add case here
			case 0: flag = 0;
					break;
			case 1: one();
					break;
			case 2: one();
					break;
					
			default: break;
		}
	}	
	return 0;
}

void one() {
	printf("You have called function ONE by Johnson:\n");
	printf("Nothing here, what do you expect?\n");
	
}

void two() {
	printf("You have called function TWO by Johnson:\n");
	printf("Nothing here too!\n");
	
}
