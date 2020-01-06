#include <stdio.h>
//#define LEN 100 
//버블정렬 

void BubbleSort(int len, int* arr){
	int i,j,tmp;
	
	for(i=0; i<len; i++){
		for(j=0; j<i; j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	} 
}

int main(){
	
	int arr[10]={34,2,11,89,23,33,90,87,100,99};
	
	BubbleSort(10, arr);
	
	for(int i=0; i<10; i++){
		printf("%d\t", arr[i]);
	}
	
	return 0;
	
}
