#include <stdio.h>
#include <string.h>


int main(){
	
	int n, a;
	scanf("%d %d",&n, &a);
	char arr[n];
	scanf("%s", arr);
	int pos=5;
	char tempo[a+5];
	int temp[26]={0};
	int max=1000005;
	for(int i=0; i<n;i++){
		if(i-pos<=0){
			temp[arr[i]-'A']++;
		}
		if(i-pos==0){
			for(int i=0; i<26;i++){
				if(max>a-temp[i]){
					max=a-temp[i];
				}
			}
			temp[arr[i-pos]-'A']--;
			pos++;
		}
		
	}
	printf("%d", max);
	
	return 0;
}
