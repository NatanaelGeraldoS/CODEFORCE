#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int grandtotal=0;
	for(int i=0; i<n;i++){
		int a, b, c;
		int total=0;
		scanf("%d %d %d", &a, &b, &c);
		if(a==1){
			total++;
		}
		if(b==1){
			total++;
		}
		if(c==1){
			total++;
		}
		if(total>=2){
			grandtotal++;
		}
	}
	printf("%d\n", grandtotal);
}
