#include <stdio.h>

int main(){
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	long long total=(a/c);
	long long total1=(b/c);
	if(a%c!=0){
		total++;
	}
	if(b%c!=0){
		total1++;
	}
	printf("%lld\n", total*total1);
	
	
}
