#include <stdio.h>
//»ğÀÔÁ¤·Ä

void InsertSort(int len, int* arr){
	
	int i,j,key;
	
	for(i=1; i<len; i++){
		key=arr[i];
		for(j=i-1; j>=0; j--){
			if(key<arr[j])
				arr[j+1]=arr[j];
			else
				break;
			arr[j]=key;
		}
	}
	
} 

int main(){
	
	int arr[10]={34,2,11,89,23,33,90,87,100,99};
	
	InsertSort(10, arr);
	
	for(int i=0; i<10; i++){
		printf("%d\t", arr[i]);
	}
	
	return 0;
		
}
