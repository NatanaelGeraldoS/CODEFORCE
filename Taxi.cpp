#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	scanf("%d", &n);
	int arr[5]={0};
	for(int i=0; i<n;i++){
		int data;
		scanf("%d", &data);
		arr[data]++;
	}
	int bus = arr[4]+arr[3]+arr[2]/2;
	arr[1]=arr[1]-arr[3];
	if(arr[2]%2!=0){
		if(arr[1]>=2){
			arr[1]-=2;
			bus++;
		}
		else{
			bus++;
			arr[1]=0;
		}
	}
	if(arr[1]>=1){
		bus+=arr[1]/4;
		if(arr[1]%4!=0){
			bus++;
		}
	}
	printf("%d\n", bus);
}
