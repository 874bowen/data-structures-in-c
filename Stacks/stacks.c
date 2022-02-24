#include <stdio.h>
#include <stdbool.h>
#define n 10
int Stack[n];
int Top = -1;

bool IsEmpty(){
	if (Top == -1) return true;
	else return false;
}
bool IsFull(){
	if (Top == n-1) return true;
	else return false;
	}
int Push(int x){
	if (IsEmpty()){
		Top = Top + 1;
		Stack[Top]= x;
	}
	else{
		if (!IsFull()){
			Top = Top + 1;
			Stack[Top]= x;
		}
	}
}
void Pop(){
	if(IsEmpty()) return;
	else{
		Top= Top- 1;	
	}
}
void Print(){
	int i;
	for (i=Top;i>-1;i--){
		printf("%d ", Stack[i]);
	}
}
void Retop(){
	printf("%d",Stack[Top]);
}

int main(){
	Push(12);
	Push(35);
	Push(300);
	Retop();
	Print();
	printf("\n");
	Pop();
	Print();
	Retop();
	return 0;
}
