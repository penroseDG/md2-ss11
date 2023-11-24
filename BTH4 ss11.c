#include <stdio.h> 
int main(){
  //1. Nhap so phan tu va gia tri cac phan tu
  int n;
  printf("Nhap so phan tu cua mang:");
  scanf("%d", &n);
  int numbers [n];
  printf("Nhap gia tri cac phan tu mang:\n");
  for (int i=0;i<n;i++){
    printf("numbers [%d]=",i);
    scanf("%d", &numbers[i]);
  }
  //2. Nhap gia tri can tim kiem
  int searchValue;
  printf("Nhap vao gia tri can tim trong mang:");
  scanf("%d", &searchValue);
  //3. Duyet mang tim chi so phan tu co gia tri bang 
  searchValue int i;
  int flagSearched = 0; //Co danh dau khong tim thay phan tu nao 
  for(i=0;i<n;i++) {
    if (numbers[i]==searchValue){
      flagSearched = 1; //Co tim thay phan tu trong mang 
      break;
    }
  }  
  //4. In gia tri phan tu va chi so phan tu tim duoc 
  if(flagSearched==1) {
    printf("Trong mang co phan tu chi so %d co gia tri bang %d\n",i,numbers[i]);
  } else {
    printf("Khong tim thay phan tu co gia tri %d trong mang\n",searchValue);
  }
}
