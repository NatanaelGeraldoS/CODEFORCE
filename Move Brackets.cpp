#include <stdio.h>


int main(){
	
	int n;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n;i++){
		int a;
		scanf("%d", &a);
		getchar();
		char arr[a];
		scanf("%s", arr);
		getchar();
		int total=0;
		for(int j=0; j<a;j++){
			if(arr[j]=='('){
				total++;
			}
			else if(total>0){
				total--;
			}
		}
		printf("%d\n", total);
		
	}
	
	return 0;
}
