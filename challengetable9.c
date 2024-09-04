#include<stdio.h>
#include<stdlib.h>
int main(){
int i,n;
  printf("n=");
  scanf("%d",&n);
   int t[n];
  for(i=0;i<n;i++){
      printf("t[%d]=",i);
        scanf("%d",&t[i]);

  }
for(i=n-1;i>=0;i--){
    printf("t[%d]=%d \t",i,t[i]);

}
return 0;


}
