#include <stdio.h>

int main(){
 
 int n;
 scanf("%d", &n);
 int arr[n+5][n+5];
 int highestdata=0;
 int highestdata1=0;
 int row[n+5]={0};
 int colom[n+5]={0};
 for(int i=0; i<n;i++){
  highestdata=0;
  for(int j=0; j<n;j++){
   scanf("%d", &arr[i][j]);
   if(arr[i][j]>highestdata){
    highestdata=arr[i][j];
    row[i]++;
   }
  }
 }
 
 for(int i=0; i<n;i++){
  highestdata1=0;
  for(int j=0; j<n;j++){
   if(arr[j][i]>highestdata1){
    highestdata1=arr[j][i];
    colom[i]++;
   }
  }
 }
 for(int i=0; i<n;i++){
  printf("%d ", colom[i]);
 }
 printf("\n");
 for(int i=0; i<n;i++){
  printf("%d\n", row[i]);
 }
 return 0;
}
