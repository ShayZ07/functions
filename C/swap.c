#include<stdio.h>

int swap();

int main(){
swap();
return 0;
}

int swap(){
int a, b, temp;
printf("Enter the values of a and b: ");
scanf("%d%d", a, b);
temp = a;
a = b;
b = temp;
printf("a = %d, b = %d", a, b);
return (a, b);
}
