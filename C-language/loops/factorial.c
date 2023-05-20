// To find the factorial of a number:


#include<stdio.h>

int main(){
int n, i, fact = 1;
printf("Enter your number: ");
scanf("%d", &n);

	for(i=n; i>=1; i--){
		fact = fact * i;
	} 
	if(n < 0){
		printf("INVALID NUMBER");
	}
	else if(n == 0){
		printf("The factorial of 0 is 1.");
	}
	else{
		printf("The factorial of your number is: %d", fact);
	}
	return 0;
}
