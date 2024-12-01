#include <stdio.h>

int main(){
	int i, j, q, a, b, add, position, arr[100];
	printf("Nhap so phan tu muon nhap: ");
	scanf("%d", &a);
	for(i=0; i<a; i++){
	printf("Nhap tung phan tu vao mang: ");
	scanf("%d", &arr[i]);
}
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
			printf("\n");
	
}
		


