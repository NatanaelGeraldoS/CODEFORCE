#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	int a;
	int even=0;
	int odd=0;
	for(int i=0; i<n;i++){
		scanf("%d", &a);
		if(a%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	int ans;
	if(even<odd){
		ans=even + ((odd-even)/2);
	}
	else{
		ans=odd;
	}
	printf("%d\n", ans);
	
	return 0;
}
