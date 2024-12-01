#include <stdio.h>

int main(){
	int i, a, dlt, position, arr[100];
	printf("Nhap so phan tu muon nhap: ");
	scanf("%d", &a);
	for(i=0; i<a; i++){
	printf("Nhap tung phan tu vao mang: ");
	scanf("%d", &arr[i]);
}
	printf("Vi tri muon xoa trong mang: ");
	scanf("%d", &position);
	if (position < 1 || position > a + 1) {
        printf("Vi tri khong hop le\n");
 
    }
	for(i = position-1 ; i< a-1; i++){
		arr[i] = arr[i+1];
	
	}
		a--;
	
		for(i=0; i<a; i++){
			printf("%d ", arr[i]);
}
			printf("\n");
	
}
