#include <stdio.h> 
int main(){
	int a,b,c,choice;
	printf("Nhap vao 3 so nguyen: ");
	scanf("%d %d %d", &a, &b, &c);
	 do {
	 	printf("\nCACULATOR\n");
		printf("1. Tong 3 so\n");
		printf("2. Trung binh cong cua 3 so nguyen\n");
		printf("3. So lon nhat nho nhat trong 3 so\n");
		printf("4. Thoat\n");
		printf("Lua chon cua ban: \n");
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				printf("Tong 3 so la: %d\n", a + b + c);
				break;
			case 2:
				printf("Trung binh cong cua 3 so la: %d\n", (a + b+ c) / 3);
				break;
			case 3:
				// Tìm so lon nhat 
				int max = a;
				if(b > max ){
					max = b; 
				} else if (c >max){
					max = c; 
				}
				int min = a;
				if(b < min){
					min = b; 
				} else if(c < min){
					min = c ;
				}
				printf("So lon nhat va so nho nhat la: %d %d", max, min); 
			case4:
				printf("Thoat chuong trinh. \n");
				break;
            	default:
				printf("Lua chon khong hop le. \n");
				break;		
		} 
	}  while(choice != 4);
}
