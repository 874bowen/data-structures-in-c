#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[7] = {1,2,3,4,5,6,7};
    printf("printing values: \n");

	int i;
    for(i=0;i<7;i++){
        printf("%d \n", arr[i]);
    }
    int a;
    printf("Enter position you want: ");
    scanf("%d", &a);
    for(i=0;i<7;i++){

        if(a==arr[i]){
            printf("At position %d we have %d ", a, arr[i]);
        }
        else{
            printf("Enter a valid number");
            break;
        }

    }

    return 0;
}
