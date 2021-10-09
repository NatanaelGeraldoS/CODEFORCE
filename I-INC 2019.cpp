#include <stdio.h>


int main(){
	
	int n;
	scanf("%d", &n);
	getchar();
	char arr[n];
	char arr1[n];
	scanf("%[^\n]", arr);
	getchar();
	scanf("%[^\n]", arr1);
	getchar();
	int jumlah[26]={0};
	for(int i=0; i<n;i++){
		if(arr[i]==arr1[i]){
			jumlah[arr[i]-'a']++;
		}
		else{
			jumlah[arr[i]-'a']++;
			jumlah[arr1[i]-'a']++;
		}
	}
	int max=0;
	for(int i=0; i<26;i++){
		if(max<jumlah[i]){
			max=jumlah[i];
		}
	}
	printf("%d", max);
	
	
	return 0;
}
