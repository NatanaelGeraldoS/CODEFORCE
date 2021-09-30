#include <stdio.h>

int main(){
	
	char arr[10][15];
	int total=0;
	for(int i=0; i<8;i++){
		scanf("%s", arr[i]);
		getchar();
		for(int j=0; j<7;j++){
			if(arr[i][j]==arr[i][j+1]){
				total++;
			}
		}
	}
	if(total){
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}
	
	return 0;
}
