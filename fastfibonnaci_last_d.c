#include <stdio.h>
long long int fibonacci_fast(long long n) {
	long long ar[n+1];
	ar[0]=0;
	ar[1]= 1;
	for(long long i=2; i<=n; i++){
		ar[i]= ar[i-1]+ar[i-2];
	}
	if((ar[n]%10)<0)
		return -(ar[n]%10);
	return ar[n]%10;
}
int main() {
    long long n = 0;
    scanf("%lld", &n);

    long long int ans=fibonacci_fast(n);
    printf("%lld",(ans));
    return 0;
}
 