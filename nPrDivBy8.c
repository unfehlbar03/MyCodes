#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char str[100];
        int l;
        scanf("%s", str);
        l = strlen(str);
        int ar[l];
        for(int i=0; i<l; i++){
            ar[i]=str[i];
        }
        if(l==1){
            if(ar[0]%8==0)
                printf("YES\n");
            else
                printf("NO");
        }
        else if(l==2){
            if((ar[0]*10+ar[1])%8==0 || (ar[1]*10+ar[0])%8==0)
                printf("YES\n");
            else
                printf("NO");
        }
        else{
            for(int i =0; i<l; i++){
                for(int j=0;j<l;j++){
                    for(int k=0;k<l;k++){
                        if(i!=j && j!=k && k!=i){
                            if((ar[i] * 100 + ar[j] * 10 + ar[k]) % 8 == 0){
                                printf("YES\n");
                                goto stat;
                            }
                        }
                    }
                }
            }
        printf("NO\n");
        } 
        stat:
        continue;
    }            
    return 0;
}