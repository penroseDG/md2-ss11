#include <stdio.h>
int main()
{
    printf("Nhap so cot va so dong cua ma tran");
    int row, col;
    scanf(" %d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    do
    {
        printf("1. in day theo ma tran\n");
        printf("2. sap xep mang co gia tri hang dong tang dan\n");
        printf("3. sap xep mang co gia tri hang cot giam dan \n");
        printf("4. Thoát\n");
        int choice;
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf("arr[%d][%d]=%d\t", i, j, arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
        for (int i = 0 ; i < row; i++)
        {
            for (int j = 1; j < col; j++)
            {
                int key=arr[i][j];
                int f=j-1;
                while (f>=0&&key<arr[i][f])
                {
                    arr[i][f+1]=arr[i][f];
                    f-=1;
                }
                arr[i][f+1]=key;
            }
        }
        case 3:
             for (int i = 0 ; i < col; i++)
        {
            for (int j = 1; j < row; j++)
            {
                int key=arr[j][i];
                int f=j-1;
                while (f>=0&&key>arr[f][i])
                {
                    arr[f+1][i]=arr[f][i];
                    f-=1;
                }
                arr[f+1][i]=key;
            }
        }
        
        default:
            break;    
        }
    } while (1 == 1);
}
