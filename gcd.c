#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd_fast(int a, int b) {
  while(b!=0){
        int temp;
        temp = b;
        b = a % b;
        a = temp;
    }
  return a;
}
int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
int main() {
  long long a,b;
   // while(true){
   //     int a = rand() % 100, b = rand() % 100;
   //     std::cout<<a<<' '<<b<<"\n";
        scanf("%d %d", &a, &b);
        long long res1 = gcd_fast(a,b);
   //     long long res2 = gcd_naive(a,b);
   //     if(res1!=res2){
   //         std::cout<<"Wrong answer "<<a<<' '<<b<<"\n";
   //         break;
   //     }
   //     else{
   //         std::cout<<"OK\n";
   //     }
   // }
  //int a, b;
  //std::cin >> a >> b;
  //std::cout << gcd_naive(a, b) << std::endl;
        printf("%d", res1);
  return 0;
}
