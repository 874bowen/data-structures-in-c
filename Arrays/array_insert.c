#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i,k=5;
    int item = 10;
    for ( i=0; i<10; i++){
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    arr[k-1] = item;
    for ( i=0; i<10; i++){
        printf("%d", arr[i]);
    }
    arr[k-1] = item;

    printf("\n%d", arr[4]);
    return 0;
}
