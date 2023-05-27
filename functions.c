#include<stdio.h>

int fib(int a, int b, int c);

int main(){
int a=0, b=1, n;
printf("Enter your limit: ");
scanf("%d", &n);
printf("%d\t%d\t", a, b);
fib(a, b, n);
return 0;
}

int fib(int x, int y, int z){
int fibo=1, i;
for(i=2; i<z; i++){
fibo = x + y;
printf("%d\t", fibo);
x = y;
y = fibo;
}
return fibo;
}
