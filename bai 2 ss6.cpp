#include <stdio.h> 
int main(){
	int num1,num2,choice;
	printf("Nhap vao 2 so nguyen: ");
	scanf("%d %d",&num1,&num2);
	 do {
        printf("\nCACULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. So du trong phep chia 2 so\n");
        printf("6. Uoc chung lon nhat\n");
        printf("7. Boi chung nho nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Tong hai so: %d\n", num1 + num2);
                break;
            case 2:
                printf("Hieu hai so: %d\n", num1 - num2);
                break;
            case 3:
                printf("Tich hai so: %d\n", num1 * num2);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Khong the chia cho 0.\n");
                } else {
                    printf("Thuong hai so: %.2f\n", (float) num1 / num2);
                }
                break;
            case 5:
                printf("So du trong phep chia hai so: %d\n", num1 % num2);
                break;
            case 6:
                // Tim uoc chung lon nhat 
				while(num1!=num2){
					if(num1 > num2){
					num1 -= num2;
					}else{
						num2 -= num1; 
					} 
				}
				printf("Uoc chung lon nhat cua 2 so la: %d\n",num1); 
                break;
            case 7:
				// Tim bôi chung nho nhat
				printf("Boi chung nho nhat cua 2 so la: %d\n", (num1 * num2) / num1); 
				break;
			case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
                break;
        }
    } while(choice != 8);
    
}
