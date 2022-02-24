#include <stdio.h>

int main()
{
    int i,j;
    int arr[5][2];
    printf("Enter element: \n");
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Array: ");
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
    }
    return 0;
}
