#include <stdio.h>
 
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int size) {
    int i, j, min_idx;

    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void bubbleSort(int arr[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    int size;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);

    int arr[size];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int choice;
    do {
        printf("\nMENU\n");
        printf("1. In gia tri cac phan tu cua mang\n");
        printf("2. Su dung Insertion Sort sap xep mang giam dan va in ra\n");
        printf("3. Su dung Selection Sort sap xep mang tang dan va in ra\n");
        printf("4. Su dung Bubble Sort sap xep mang giam dan va in ra\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Cac phan tu cua mang la: ");
                printArray(arr, size);
                break;
            case 2:
                insertionSort(arr, size);
                printf("Mang sau khi sap xep giam dan la: ");
                printArray(arr, size);
                break;
            case 3:
                selectionSort(arr, size);
                printf("Mang sau khi sap xep tang dan la: ");
                printArray(arr, size);
                break;
            case 4:
                bubbleSort(arr, size);
                printf("Mang sau khi sap xep giam dan la: ");
                printArray(arr, size);
                break;
            case 5:
                printf("Tam biet!");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 5);

    return 0;
}
