#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int n = 5;   int p = 2;
    int i;
    for (i = 0; i <= n-1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = p-1; i < n-1; i++){
        arr[i]=arr[i+1];
    }
    for (i = 0; i < n-1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
