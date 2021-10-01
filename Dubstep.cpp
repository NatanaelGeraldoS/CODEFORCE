#include <stdio.h>
#include <string.h>

int main(){
	char arr[255];
	scanf("%s", arr);
	int num=0;
	int flag=0;
	for(int i=0;i<strlen(arr);i++){
		if(arr[i]=='W' && arr[i+1]=='U' && arr[i+2]=='B'){
			i+=2;
			flag=1;
		}
		else{
			if(num==0){
				printf("%c", arr[i]);
				flag=0;
				num++;
			}
			else{
				if(flag==1){
					printf(" %c", arr[i]);
					flag=0;
				}
				else{
					printf("%c", arr[i]);
				}
				
			}
		}
	}
}
