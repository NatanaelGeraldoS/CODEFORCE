#include<stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	for(int i=0; i<n;i++){
		long long a;
		scanf("%lld", &a);
		long long data=1;
		for(long long i=1; i<=a*2;i++){
			data = ((i%1000000007)*(data %1000000007))%1000000007;	
		}
		
		data = ((data%1000000007)/2)%1000000007;
		printf("%lld\n", data);
	}
	
	return 0;
}
