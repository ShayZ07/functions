#include<stdio.h.>

int main(){
int dec, bin=0, rem, i=1;
printf("Enter your decimal number: ");
scanf("%d", &dec);

while(dec!=0){
	rem = dec % 2;
	dec = dec / 2;
	bin = bin + (rem * i);
	i = i * 10;
}
printf("The binary equivalent is: %d", bin);
return 0;
}
