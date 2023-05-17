#include<stdio.h>

void sum(int a, int b);

int main(){
int a, b;
printf("Enter the values of a and b: ");
scanf("%d%d", &a, &b);
sum(a, b);
return 0;
}

void sum(int x, int y){
int add;
add = x + y;
printf("The sum is: %d", add);
}
