#include <stdio.h>

int main(){
	int n, a;
	scanf("%d %d", &n, &a);
	int total=0;
	for(int i=0; i<n;i++){
		int b;
		scanf("%d", &b);
		if(b>=a){
			total++;
		}
	}
	printf("%d\n", total);
}
