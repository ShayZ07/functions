#include<stdio.h>

int fact(int n);

int main(){
int n;
printf("Enter your number: ");
scanf("%d", &n);
	if(n < 0){
		printf("INVALID NUMBER.");
	}
	else if(n == 0){
		printf("The factorial of 0 is 1.");
	}
	else{
		printf("The factorial of your number is: %d", fact(n));
	}
return 0;
}

int fact(int n){
int facto = 1, i;
	for(i=n; i>=1; i--){
		facto = facto * i;
	}
return facto;
}
