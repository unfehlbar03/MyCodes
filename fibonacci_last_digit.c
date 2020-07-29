#include <stdio.h>
#include <stdlib.h>
int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1; 

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }
    printf("%d\n", current);
    return current % 10;
}
int get_fibonacci_last_digit_fast(long long int n){
    long long int ar[n];
    ar[0]=0;
    ar[1]=1;
    for(long long int i=2;i<=n; i++){
        ar[i]= ar[i-1]+ar[i-2];
    
    }
   printf("%d\n", ar[n]);

    return (ar[n]%10);
}

int main() {
    int a =1;
   // while(a){

    //    int n = rand() % 10000;
            long long int n;
            scanf("%lld", &n);
    //    printf("%d\n", n);
    //     int c = get_fibonacci_last_digit_fast(n);
       int d = get_fibonacci_last_digit_naive(n);
    //   printf("%d  %d\n", c, d);
    //   if(c!=d)
    //       break;
        printf("%d\n", d);

    //}
    return 0;
}
