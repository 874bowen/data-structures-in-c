#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;

    int i, j;
    printf("Enter rows and columns: ");
    scanf("%d%d", &n, &m);
    int arr[n][m];
    printf("%d rows  and %d columns: \n", n,m);
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter value: ");
            scanf("%d", &arr[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){

            printf("%d", arr[i][j]);
        }
    }
    return 0;
}
