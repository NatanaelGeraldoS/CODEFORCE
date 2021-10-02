#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);
	int arr[b+5];
	for(int i=0; i<b;i++){
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+b);
	int small=100000000000;
	for(int i=0; i<b-a+1;i++){
//		printf("%d %d\n", arr[i], arr[i+a]);
		if(small>(arr[i+a-1]-arr[i])){
			small=arr[i+a-1]-arr[i];
		}
	}
	printf("%d\n", small);
	return 0;
}
