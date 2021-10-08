#include <stdio.h>

int main(){
    int length;
    int substring;
    
    scanf("%d %d", &length, &substring);
    
    char str[length+5];
    scanf("%s", str);getchar();
    
    int min = 100000;
    int temp[30]={0};
    int max=0;
    int total = 0;
    for(int i = 0 ; i < length ; i++){
        temp[str[i]-'A']++;
        total = 0;
        for(int j = 0 ; j<26 ; j++){
            total += temp[j];
        }    
        if(total == substring){
            for(int j = 0 ; j <26 ;j++){
                if(max < temp[j]){
                    max = temp[j];
                }
            }
            min = substring-max;
            temp[str[i-substring+1]-'A']--;
        }
    }    
    printf("%d\n", min);
    
    
    return 0;
}
