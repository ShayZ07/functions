#include<stdio.h>

int main(){
int a[20][20], row, col, i, j, n;
printf("Enter the number of rows and columns: ");
scanf("%d%d", &row, &col);

printf("Enter the elements: ");
for(i=0; i<n; i++){
	for(j=0; j<n; j++){
		scanf("%d", &a[i][j]);
	}
}
printf("Your array is: ");
for(i=0; i<n; i++){
	for(j=0; j<n; j++){
		printf("%d ", a[i][j]);
	}
	printf("\n");
}
return 0;
}
