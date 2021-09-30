#include <stdio.h>
#include <string.h>

int main(){
	
	char a[20], b[20];
	scanf("%s %[^\n]", a, b);
	getchar();
	int posisi;
	char c[20];
	c[0]=a[0];
	int last= strlen(a);
	for(int i=1; i<strlen(a);i++){
		if(a[i]>=b[0]){
			last=i;
			break;
		}
		c[i]=a[i];
	}
	c[last]='\0';
	printf("%s%c\n", c, b[0]);
	return 0;
}
