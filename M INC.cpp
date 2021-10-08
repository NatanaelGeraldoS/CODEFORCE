#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	int arr[n];
	int total=0;
	for(int i=0; i<n;i++){
		scanf("%d", &arr[i]);
		if(arr[i]>0 && arr[i-1]==0 && i-1 >=0){
			total++;
			arr[i]--;
			arr[i-1]=-1;
		}
		if(arr[i-1]>=1 && i-1>=0){
			arr[i-1]--;
			arr[i]++;
		}
		if(arr[i]>=1){
			total++;
			arr[i]--;
			if(arr[i]==0){
				arr[i]=-1;
			}
		}
	}
	printf("%d\n", total);
	
	
	return 0;
}
