#include <stdio.h>

int main(){
	int i,j;
	int Arrinsert[6];
	int Arr[3][2];
//	={{1,2},{3,4},{5,6}};
	for (i=0;i<3;i++){
		for (j=0;j<2;j++){
			scanf("%d", &Arr[i][j]);
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<2;j++){
			printf(" %d ", Arr[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<5;i++){
		scanf("%d", &Arrinsert[i]);
	}
	for (i=0;i<6;i++){
		printf("%d ", Arrinsert[i]);
	}
	int pos;
	int item;
	printf("\n");
	printf("Enter item and position you want to insert \n");
	scanf("%d%d", &item, &pos);
	for (i=6;i>pos-1;i--){
		Arrinsert[i]=Arrinsert[i-1];
	}
	Arrinsert[pos-1]=item;
	printf("\n");
	for (i=0;i<6;i++){
		printf("%d ", Arrinsert[i]);
	}
	printf("\n");
	int num, del,val;
	printf("Enter the number to update and value: ");
	scanf("%d%d", &num, &val);
	for(i=0;i<6;i++){
		if (Arrinsert[i]==num){
			Arrinsert[i] = val;
		}
	}
	for (i=0;i<6;i++){
		printf("%d ", Arrinsert[i]);
	}
	printf("\n");
	printf("Enter position to delete: ");
	scanf("%d", &del);
	for(i=del-1;i<6;i++){
		Arrinsert[i]=Arrinsert[i+1];
	}
	
	for (i=0;i<5;i++){
		printf("%d ", Arrinsert[i]);
	}
	return 0;
}
