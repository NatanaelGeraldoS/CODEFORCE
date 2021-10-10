#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	scanf("%d", &n);
	getchar();
	char first[n+5], second[n+5];
	for(int i=0; i<n;i++){
		scanf("%c", &first[i]);
	}
	for(int i=0; i<n;i++){
		scanf("%c", &second[i]);
	}
	sort(first, first+n);
	sort(second, second+n);
	int total=0;
	int total1=0;
	for(int i=0; i<n;i++){
		printf("%c %c\n", first[i], second[i]);
	}
	for(int i=0; i<n;i++){
		printf("%c %c\n", first[i], second[i]);
		if(first[i]>second[i]){
			total++;
		}
		else{
			break;
		}
	}
	for(int i=0; i<n;i++){
		printf("%c %c\n", first[i], second[n-i-1]);
		if(first[i]<second[n-i-1]){
			total1++;
			printf("masuk");
		}
		else{
			break;
		}
	}
	printf("%d %d", total, total1);
	if(total1==n || total==n){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	
	return 0;
}
