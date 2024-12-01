#include <stdio.h>

int main(){
	int n = 6, position, new, arr[6]={1,2,3,4,5,6};
	
    printf("Nhap vi tri can sua (tu 1 den %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) {
        printf("Vi tri khong hop le\n");
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &new);

    arr[position - 1] = new;

    printf("Mang sau khi sua:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



