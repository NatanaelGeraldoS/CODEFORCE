#include <stdio.h>

int getmax(int a, int b){
	if(a>b){
		return a;
	}
	return b;
}

int main(){
	
	int m[7];
	int w[7];
	int data[7]={500, 1000, 1500, 2000, 2500};
	int hs, hu;
	scanf("%d %d %d %d %d", &m[1], &m[2], &m[3], &m[4], &m[5]);
	scanf("%d %d %d %d %d", &w[1], &w[2], &w[3], &w[4], &w[5]);
	scanf("%d %d", &hs, &hu);
	double total =0;
	for(int i=1; i<=5;i++){
		total+= getmax((int)(0.3 * data[i-1]), (int)(((1-(float)m[i]/250)*data[i-1])-50*w[i]));
	}
	total+=hs*100;
	total-=hu*50;
	printf("%lld\n", (long long)total);
	return 0;
}
