#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  long long p, q;
  long long sum;

  while( scanf( "%lld%lld", &p, &q ) != EOF && !( p < 0 && q < 0 )){
    sum = 0;

    while( p || q ){
      sum += (q%10+p%10)*((q%10)-(p%10)+1)/2;
      sum += (q/10-p/10)*45;

      if( p%10 && (p/10 || q/10) ) p += 10;
      p /= 10;
      q /= 10;
    }

    printf( "%lld\n", sum );
  }
  return 0;
}
