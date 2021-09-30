#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	int total=0;
	for(int i=1; i<=n;i+=2){
		printf("%d", i);
		if(i!=n-1 && i!=n){
			printf("+");
		}
		total+=i;
	}
	if(n!=0){
		printf("=%d\n", total);	
	}
	
	return 0;
}
