#include <stdio.h>
#include <string.h>

int main(){
	
	int n;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n;i++){
		int a;
		scanf("%d", &a);
		getchar();
		char arr[a+5];
		scanf("%[^\n]", arr);
		getchar();
		int data[27]={0};
		int flag=0;
		for(int j=0;j<a;j){
			if(data[arr[j]-'A']==0){
				data[arr[j]-'A']=1;
				int temp=j+1;
				while(arr[j]==arr[temp]){
					temp++;
				}
				j=temp;
			}
			else{
				printf("NO\n");
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("YES\n");
		}
	}
	
	return 0;
}
