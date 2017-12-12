#include <stdio.h>
#include <stdlib.h>

int getnum(int n){
  int sw;//十位数
  int gw;//个位数
  if(n>=0||n<=9){
    return n;
  }
  else {
    sw=n%10;
    gw=n/10;
    n=sw+gw;
    getnum(n);
  }
}

int main(void){
  int *a;
  int n=0;
  while(1){
    a=(int *)malloc(sizeof(int));
    printf("输入数字:   ");
    scanf("%d",&a[n]);
    if(a[n]==0){
      break;
       }
    n++;
    }
    for(int i=0;i<n;i++){
      printf("%d\n", getnum(a[i]));
    }

}
