#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("nhap so nguyen n \n");
	scanf("%d",&n);

	do{
		printf("\nPRACTICE\n");
		printf("1. day so chia het cho 2 va giam dan \n");
		printf("2. tong day so \n");
		printf("3. uoc so chan cua n \n");
		printf("4. uoc so le cua n \n");
		printf("5. uoc so le lon nhat \n");
		printf("6. thoat \n");

		int choice;
		scanf("%d",&choice);
		int sum = 0;
		int odd_max = 0;
		switch(choice){
			case 1:
				printf("day so chia het cho 2 la : ");
				for(int i = 0; i <= n ; i++){
					if(i % 2 == 0){
						printf("%d \t",i);
					}
				}
				printf("\n");
				break;
			case 2:
				for(int i = 0 ; i <= n ; i++){
					sum += i;
				}
				printf("tong cua day la : %d \n",sum);
				break;
			case 3:
				printf("uoc so chan cua day la : ");
				for(int i = 1 ; i <= n ; i++){
					if(n % i == 0){
						if(i % 2 == 0){
							printf("%d \t", i);
						}
					}
				}
				printf("\n");
				break;
			case 4:
				printf("uoc so le cua day la : ");
				for(int i = 1 ; i <= n ; i++){
					if(n % i == 0){
						if(i % 2 != 0){
							printf("%d \t",i);
						}
					}
				}
				printf("\n");
				break;
			case 5:
				for(int i = 1 ; i <= n ; i++){
					if(n % i == 0){
						if(i % 2 != 0){
							if(i > odd_max){
								odd_max = i;
							}		
						}
					}
				}
				printf("uoc so le lon nhat la : %d \n",odd_max);
				break;
			case 6:
				exit(0);
			default:
				printf("vui long nhap lai tu 1 - 6 \n");
		}
	}while(1==1);
}
