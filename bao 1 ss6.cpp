#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so n: ");
	scanf("%d,&n");
	printf("Bang cuu chuong cua %d:\n", n);
	int i; 
	for (i = 1; i <= 9; i++) {
    printf("%d x %d = %d\n", n, i, (n * i));
	}
}
