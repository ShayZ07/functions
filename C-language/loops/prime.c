// To check if the number is prime or not:

#include<stdio.h>

int main(){
int i, n, count=0;
printf("Enter your number: ");
scanf("%d", &n);

	for(i=0; i<n; i++){
		if(n%i == 0){
			count++;
		}
	}
	if(count==2){
		printf("Prime number: %d", i);
	}
	else{
		printf("Not a prim number: %d", i);
	}
}
