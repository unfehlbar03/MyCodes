#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	long long ar[n],br[n];
	for(int i=0; i<n;i++){
        scanf("%lli",&ar[i]);
	}
	for(int j=0; j<n;j++){
        scanf("%lli", &br[j]);
	}
	int t1, t2;
	for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1; j++){
            if(ar[j]>ar[j+1]){
                t1=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t1;
            }
            if(br[j]>br[j+1]){
                t2=br[j];
                br[j]=br[j+1];
                br[j+1]=t2;
            }
        }
	}
	long long sum = 0;
	for(int j=0; j<n; j++){
        long long current =0;
		current = ar[j]*br[j];
		sum = sum + current;
	}
	printf("%lli", sum);
	return 0;
}
