// Find the greatest of 3 numbers.

#include <stdio.h>

int main (int argc, char *argv[]) {

	int num1, num2, num3;
	printf("\nPlease enter 3 numbers separated by a space:\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	if(num1 > num2){
		if(num1 > num3){
			printf("\nNum1 is greatest!\n");
		} else {
				printf("\nNum3 is greatest!\n");
		}
	} else {
			if(num2 > num3){
				printf("\nNum2 is greatest!\n");
			}
			else{
					printf("\nNum3 is greatest!\n");
			}
	} 

	
	return 0;
}