#include<stdio.h>
int main(void){
  long long n=0, max=0, sum=0;
  scanf("%d", &max);
  while (1){
    n++;
    sum=sum+n;
    if(sum>max){
      n--;
      break;
    }
  }
  printf("%d", n);
  return 0;
}