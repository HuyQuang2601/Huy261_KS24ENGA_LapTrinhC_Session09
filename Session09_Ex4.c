#include <stdio.h>

int main(){
	int a,b,i,n,add,newNum,position,arr[10];
	while(1){
	printf("   MENU\n\n");
	printf("1.Nhap vao mang\n");
	printf("2.Hien thi mang\n");
	printf("3.Them phan tu\n");
	printf("4.Sua phan tu\n");
	printf("5.Xoa phan tu\n");
	printf("6.Thoat\n");
	printf("Lua chon cua ban : ");
	scanf("%d", &b);

	switch(b){
		case 1:
				printf("Nhap so phan tu muon nhap: ");
				scanf("%d", &a);
			for(i=0; i<a; i++){
				printf("Nhap tung phan tu vao mang: ");
				scanf("%d", &arr[i]);
			}
			break;
		case 2:
			for(i=0; i<a; i++){
				printf("%d ", arr[i]);
			}
				printf("\n\n");
			break;
		case 3:
				printf("Gia tri muon them vao mang: ");
				scanf("%d", &add);
				printf("Vi tri muon them vao mang: ");
				scanf("%d", &position);
			if (position < 1 || position > a + 1) {
			        printf("Vi tri khong hop le\n");
			 
			    }
			for(i=a; i>=position-1; i--){
					arr[i+1]=arr[i];
				
				}
					arr[position-1] = add;
					a++;
			
					for(i=0; i<a; i++){
						printf("%d ", arr[i]);
			}
			
				printf("\n\n");
			break;
		case 4:
				printf("Nhap vi tri can sua (tu 1 den %d): ", a);
		   		scanf("%d", &position);
		
		    if (position < 1 || position > a) {
		        printf("Vi tri khong hop le\n");
		    }
		
		 	   	printf("Nhap gia tri moi: ");
		   		scanf("%d", &newNum);
		
		   		arr[position - 1] = newNum;
		
		  		printf("Mang sau khi sua:\n");
		    for (int i = 0; i < a; i++) {
		        printf("%d ", arr[i]);
		    }
		    	printf("\n\n");
		    	
				break;
		case 5:
				printf("Vi tri muon xoa trong mang: ");
				scanf("%d", &position);
			if (position < 1 || position > a + 1){
		        printf("Vi tri khong hop le\n");
			   	}
			for(i = position-1 ; i< a-1; i++){
				arr[i] = arr[i+1];
			}
				a--;
			
			for(i=0; i<a; i++){
				printf("%d ", arr[i]);
			}
				printf("\n\n");
				break;
		case 6:
			break;
	
		default:
			printf("Lua chon cua ban khong hop le\n\n");
		}
		if(b==6){
			break;
		}
	
}

}
