#include<stdio.h>

int main(){
int n, x=1, sum=0, i=0;
printf("Enter your limit: ");
scanf("%d", &n);

while(n > 0){
printf("%d", x);
	if(i < n){
		printf(" + ");
	}
sum = sum + i;
x = 1 + (x * 10);

}
printf("%d", sum);
}
