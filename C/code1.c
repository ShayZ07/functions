#include<stdio.h>

// No-return type without arguement:


void swap();

int main(){
swap();
return 0;
}

void swap(){
int a, b, temp;
printf("Enter the values of 'a' and 'b': ");
scanf("%d%d", &a, &b);

temp = a;
a = b;
b = temp;
printf("a = %d, b = %d", a, b);
}
