#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	int arr[n];
	int arr1;
	int point=0;
	for(int i=0; i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<n;i++){
		scanf("%d", &arr1);
		if(arr[i]>arr1){
			point+=3;
		}
		else if(arr[i]==arr1){
			point+=1;
		}
	}
	printf("%d\n", point);
	
	return 0;
}
