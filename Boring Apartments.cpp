#include <stdio.h>
#include <string.h>

int main(){
	
	int n;
	scanf("%d", &n);
	for(int i=0; i<n;i++){
		char angka[6];
		scanf("%s", angka);
		int total=0;
		int data=angka[0]-'0';
		if(strlen(angka)==4){
			total = data*10;
		}
		else if(strlen(angka)==3){
			total = data*6 + (data-1)*4;
		}
		else if(strlen(angka)==2){
			total = data*3 + (data-1)*7;
		}
		else{
			total = data*1 + (data-1)*9;
		}
		printf("%d\n", total);
	}
	
}
