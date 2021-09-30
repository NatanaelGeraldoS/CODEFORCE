#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	int a;
	int length=1;
	int max=0;
	scanf("%d", &a);
	for(int i=0; i<n-1;i++){
		int b;
		scanf("%d", &b);
		
		if(b<a)
		{
			if(max<length){
				max=length;
			}
			length=0;
		}
		length++;
		a=b;
	}
	if(max<length){
		max=length;
	}
	printf("%d\n", max);
	
	return 0;
}
