#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    long long int max1=0, max2=0;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]>max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i]>max2 && i != max1){
            max2=a[i];
        }
    }
    printf("%lld",(long long) max1*max2);
    return 0;
}


