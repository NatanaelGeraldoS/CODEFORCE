#include <stdio.h>
#include <bits/stdc++.h>
#include <string.h>

int main(){
	
	int n;
	scanf("%d", &n);
	for(int i=0; i<n;i++){
		int a;
		
		int total=0;
		scanf("%d", &a);
		int arr[a+5];
		int arr1[a+5];
		for(int j=0; j<a;j++){
			scanf("%d", &arr[j]);
			arr1[j]=arr[j];
		}
		std::sort(arr1, arr1+a);
		int data[a+15][5];
		for(int l=0; l<a;l++){
			if(arr[l] != arr1[l]){
				int temp=0;
				for(int k=l+1; k<a;k++){
					if(arr1[l]==arr[k]){
						temp=k;
						data[total][0]=l;
						data[total][1]=k;
						data[total][2]=k-l;
						total++;
						break;
					}
				}	
				int backup = arr[temp];
				for(int q=temp; q>l;q--){
					arr[q]=arr[q-1];
				}
				arr[l]=backup;
			}
			

		}
		printf("%d\n", total);
		for(int p=0; p<total;p++){
			printf("%d %d %d\n", data[p][0]+1, data[p][1]+1, data[p][2]);
		}
	}
	
	return 0;
}
