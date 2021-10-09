#include <stdio.h>

int main(){
	
	int n, k;
	scanf("%d %d", &n, &k);
	int total=0;
	int a;
	for(int i=0; i<n;i++){
		scanf("%d", &a);
		total+=a;
	}
	if(total%2==0){
		printf("Preston\n");
	}
	else{
		printf("John\n");
	}
	return 0;
}
