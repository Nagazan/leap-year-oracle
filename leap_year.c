#include <stdio.h>

int main(){

	int yar;

	printf("Enter a year : ");
	scanf("%d", &yar);

	if((yar % 4 == 0 && yar % 100 != 0) || (yar % 400 == 0)){
		printf("%d is a leap year",yar);
	}	
    else{
		printf("%d is not a leap year",yar);
	}
	

	

	return 0;
}

    
