#include<stdio.h>

// Return type with arguement:

/*int fact(int n);

int main(){
int n;
printf("Enter your number: ");
scanf("%d", &n);
	if(n < 0){
		printf("Invalid number.");
	}
	else if(n == 0){
		printf("The factorial of 0 is 1.");
	}
	else{
		printf("The factorial of the number is: %d", fact(n));
	}
return 0;
}

int fact(int n){
int facto = 1, i;
	for(i=n; i>=1; i--){
	facto = facto * i;
	}
return facto;
}*/

// Return type without arguement:

/*int fact();

int main(){
fact();
return 0;
}

int fact(){
int n, facto=1, i;
printf("Enter your number: ");
scanf("%d", &n);
	for(i=n; i>=1; i--){
		if(n < 0){
                	printf("INVALID NUMBER.");
        	}
        	else if(n == 0){
                	printf("The factorial of 0 is 1.");
        	}
        	else{
                	facto = facto * i;
        	}
}
printf("The factorial of the number is: %d", facto);
}*/

// No-return type with arguement:

/*void fact(int n);

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
		fact(n);
	}
return 0;
}

void fact(int n){
int facto = 1, i;
	for(i=n; i>=1; i--){
		facto = facto * i;
	}
printf("The factorial of the number is: %d", facto);
}*/

// No-return type wihtout arguement:


/*void fact();

int main(){
fact();
return 0;
}

void fact(){
int n, facto=1, i;
printf("Enter your number: ");
scanf("%d", &n);
	for(i=n; i>=1; i--){
		if(n < 0){
                printf("INVALID NUMBER.");
        }
        else if(n == 0){
                printf("The factorial of 0 is 1.");
        }
        else{
                facto = facto * i;
        }
}
printf("The factorial of the number is: %d", facto);
}*/

