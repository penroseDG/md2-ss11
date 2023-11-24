#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, i, mid, end, start, choice, find;
	printf("nhap so luong phan tu:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	for (int i=1;i<n;i++){
		int key=arr[i];
	    int j = i-1;
	    	while(j>=0 && key<arr[j]){ 
	    		arr [j+1] = arr[j]; 
	    		j-=1;
	    	}
	    arr [j+1] = key;
  	}
	do{
	printf("menu\n");
	printf("1. in ra cac phan tu\n");
	printf("2. nhap phan tu tim kiem su dung tim kiem toan tinh tim cac phan tu trong mang bang gia tri tim kiem\n");
	printf("3.nhap phan tu tim kiem su dung tim kiem nhi phan tim cac phan tu trong mang bang gia tri tim kiem\n");
	printf("4.thoat\n");
	printf("nhap lua chon cua ban:");
	scanf("%d", &choice);
		switch(choice){
			case 1: 
				for(i=0;i<n;i++){
					printf("arr[%d]=%d\t", i, arr[i]);
				}
				break;
			case 2:
				printf("\nnhap so can tim :\n");
				scanf("%d", &find);
				printf("cac so tim duoc :\n");
				for(i=0; i<n; i++){
					if(arr[i]==find){
						printf("arr[%d]=%d\n", i, arr[i]);
					}
				}
				break;
			case 3:
				printf("nhap so can tim \n:");
				scanf("%d", &find);
				printf("cac so tim duoc\n :");
				start=0;
				end=n;
				while(start<=end){
					mid = (start + end)/2;
					if(arr[mid]==find){
						printf("arr[%d]=%d\n", mid, find);
						break;
					}else if(arr[mid]<find){
						start = mid + 1;
					}else{
						end = mid - 1;
					}		
			}
			break;
			case 4:
				exit(0);
			default:
    			 printf("Vui long chon tu 1-4\n");		
		}
	}while (choice!=4);
}
