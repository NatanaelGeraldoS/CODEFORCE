#include <stdio.h>

int main(){
	int m, n, a, b;
	scanf("%d %d %d %d", &m, &n, &a, &b);
	if(n*a<=b){
		printf("%d\n", m*a);
	}
	else if(n*a>b){
		int temp = (m/n)*b + (m%n*a);
		int temp2 = (m/n)*b + b;
		if(temp>temp2){
			printf("%d\n", temp2);
		}
		else{
			printf("%d\n", temp);
		}
	}
	
}
