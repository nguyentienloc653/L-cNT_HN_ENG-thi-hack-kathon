#include<stdio.h>
int main (){
	int arr[100],n=0,choice;
	do{
		printf("MENU \n");
		printf("1.Nhap so phan tu va gia tri cho mang \n");
		printf("2.In ra gia tri cac phan tu trong mang \n");
		printf("3.Dem so luong cac so hoan hao co trong mang \n");
		printf("4.Gia tri nho thu hai trong mang \n");
		printf("5.Them mot phan tu vao trong mang \n");
		printf("6.Xoa mot phan tu trong mang \n");
		printf("7.Sap xep mang theo thu tu tang dan \n");
		printf("8.Tim kiem phan tu \n");
		printf("9.Sap xep mang theo thu tu le dung truoc chan dung sau \n");
		printf("10.Kiem tra mang \n");
		printf("11.Thoat \n");
		printf("Lua chon cua ban :");
		scanf("%d",&choice);
		switch (choice) {
			case 1: {	
			printf("Nhap so phan tu: ");
				scanf("%d",&n);
				if(n<=0 || n>100){
					printf("So luong phan tu khong hop le !\n");
					break;
				}
				for(int i = 0; i < n; i++){
					printf("Phan tu tai vi tri %d: ",i);
					scanf("%d",&arr[i]);
				}		
				break;
			}
			case 2: {
				printf("Cac gia tri phan tu trong mang :\n");
				for(int i=0;i<n;i++){
					printf("arr[%d]=%d \n",i,arr[i]);
				}
				break;
			}
			case 3: {
               
				break;
			}
			case 4: {
				if (n < 2) {
                    printf("Mang khong du phan tu de tim gia tri nho thu hai.\n");
                    break;
                }
                int min1 = arr[0], min2 = __INT_MAX__;
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min1) {
                        min2 = min1;
                        min1 = arr[i];
                    } else if (arr[i] > min1 && arr[i] < min2) {
                        min2 = arr[i];
                    }
                }
                if (min2 == __INT_MAX__) {
                    printf("Khong co gia tri nho thu 2 trong mang.\n");
                } else {
                    printf("Gia tri nho thu 2 trong mang la: %d\n", min2);
                }
				break;
			}
			case 5: {
				int value, position;
                if (n >= 100) {
                    printf("Mang da day, khong the them!\n");
                    break;
                }
                printf("nhap vao vi tri muon them trong mang: ");
                scanf("%d",&position);
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
              	for(int i=n;i>position;i--){
              		arr[i]=arr[i-1];
				  }
				  arr[position]=value;
				  n++;
				break;
			}
			case 6: {
				int index;
				printf("Moi ban nhap vi tri muon xoa trong mang : ");
				scanf("%d",&index);
				if(index <=0 || index > 100){
					printf("vi tri khong hop le ");
					break;
				}
				for(int i=index;i<n-1;i++){
					arr[i]=arr[i+1];
				}
				n--;
				break;
			}
			case 7: {
			for(int i=0;i<n-1;i++){
					for(int j=i+1;j<n;j++){
						if(arr[i]>arr[j]){
							int temp = arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
				printf("Mang sau khi duoc sap xep la: ");
				for(int i=0;i<n;i++){
					printf("%d \t",arr[i]);
				}
				printf("\n");
				break;
			}
			case 8: {
					int value, found=0;
				printf("Nhap gia tri can tim: ");
				scanf("%d",&value);
				for(int i=0;i<n;i++){
					if(arr[i]==value){
						printf("Gia tri %d nam o vi tri: %d\n",value,i);
						found=1;
					}
				}
				if(found != 1){
					printf("Gia tri %d khong co trong mang \n",value);
				}
				break;
			}
			case 9: {
				break;
			}
			case 10: {
				break;
			}
			case 11: {
				printf("Thoat chuong trinh \n");
				break;
			}
			default :
				printf("Lua chon khong hop le \n");
				break;
		}
	}
	while(choice != 11);
	return 0;
}
