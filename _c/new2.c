#include<stdio.h>
#include<stdbool.h>
void swap(int* x, int* y){
	int temp = *x;
		*x = *y;
		*y = temp;	
}
void printA(int num, int* arr){
	int i;
	
	for(i=0; i<num; i++){
		
		printf("%d ",arr[i]);
	}
}
void bubble(int N, int* a){
	int temp;
	int i, j;
	bool k;
	
	for(i=0; i < N-1; i++){
		
		printf("attemps : %d\n", i+1);
		k = false;
		
		for(j=0; j < N-1-i; j++){
			
			if(a[j] > a[j+1]){
				
				swap(&a[j], &a[j+1]);
				k = true;
			}
			
		}
		if(k == false){
			break;
		}
	}
}
int main(){
	int array[] = {5,8,3,1,9,4,7};
//	int array[] = {1,3,5,6,7,8,9};
	int n = 7;
	
	bubble(n, array);
	printA(n, array);	
	return 0;
}