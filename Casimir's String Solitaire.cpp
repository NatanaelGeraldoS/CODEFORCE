#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0; i<n;i++){
		char string[50];
		scanf("%s", string);
		int a=0;
		int b=0;
		int c=0;
		int total=0;
		for(int j=0; j<strlen(string);j++){
			if(string[j]=='A'){
				a++;
			}
			else if(string[j]=='C'){
				c++;
			}
			else if(string[j]=='B'){
				b++;
			}
		}
//		printf("%d %d %d", a, b, c);
		if(b==a+c){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
