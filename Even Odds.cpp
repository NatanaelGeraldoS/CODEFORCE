#include <stdio.h>

int main(){
	
	int n, k;
	scanf("%d %d", &n, &k);
	if(n%2==0){
		if(k<=n/2){
			printf("%lld", (long long)(2*k-1));
		}
		else{
			printf("%lld", (long long)(2*(k-n/2)));
		}
	}
	else{
		if(k<=n/2){
			printf("%lld", (long long)(2*k-1));
		}
		else{
			printf("%lld", (long long)(2*(k-(n+1)/2)));
		}
	}
	
	return 0;
}
