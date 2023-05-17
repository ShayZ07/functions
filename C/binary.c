#include<stdio.h>
#include<math.h>

int main(){
int bin, dec=0, rem, i=0;
printf("Enter your binary number: ");
scanf("%d", &bin);

while(bin!=0){
	rem = bin % 10;
	dec = dec + pow(2,i) * (rem);
	bin = bin / 10;
	i++;
}
printf("The decimal equivalent is: %d", dec);
return 0;
}
