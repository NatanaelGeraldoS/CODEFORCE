#include <stdio.h>
#include <string.h>

int main(){
	
	char arr[255];
	scanf("%[^\n]", arr);
	getchar();
	int flag=0;
	for(int i=0; i<strlen(arr);i++){
		if(arr[i]=='Q' || arr[i]=='H' || arr[i]=='9'){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	
	return 0;
}
