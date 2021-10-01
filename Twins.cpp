#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	scanf("%d", &n);
	int arr[n];
	int sum=0;
	for(int i=0; i<n;i++){
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	sort(arr, arr+n);
	int total=0;
	int i;
	for(i=0; total*2<=sum;i++){
		total+=arr[n-i-1];
	}
	printf("%d", i);
	
	return  0;
}
