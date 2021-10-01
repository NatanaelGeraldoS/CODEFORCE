#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	int even=0;
	int odd=0;
	int poseven;
	int posodd;
	for(int i=0; i<n;i++){
		int a;
		scanf("%d", &a);
		if(a%2==0){
			even++;
			poseven=i+1;
		}
		else{
			odd++;
			posodd=i+1;
		}
	}
	if(odd==1){
		printf("%d\n", posodd);
	}
	else{
		printf("%d\n", poseven);
	}
	
	return 0;
}
