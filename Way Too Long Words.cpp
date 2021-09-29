#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n;i++){
		char string[255];
		scanf("%[^\n]", string);
		getchar();
		if(strlen(string)>10){
			printf("%c%d%c\n", string[0], strlen(string)-2, string[strlen(string)-1]);
		}
		else{
			printf("%s\n", string);
		}
	}
}
