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
    printf("L'�l�ment %d est pr�sent dans le tableau.",elem);

else
    printf("L'�l�ment %d n'est pas pr�sent dans le tableau.\n", elem);



return 0;


}

