#include<stdio.h>
#include<stdlib.h>
int main(){
int i,n;
int elem,trov;
  trov=0;
  printf("n=");
  scanf("%d",&n);
   int t[n];
  for(i=0;i<n;i++){
      printf("t[%d]=",i);
        scanf("%d",&t[i]);
}
printf("entre element :");
scanf("%d",&elem);
for(i=0;i<=elem;i++){
   if (t[i]==elem){
        trov=1;
        break;}
   }
if(trov)
    printf("L'élément %d est présent dans le tableau.",elem);

else
    printf("L'élément %d n'est pas présent dans le tableau.\n", elem);



return 0;


}

