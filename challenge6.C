#include<stdlib.h>
#include<stdiO.h>
int main(){
    int n,l;
    printf("n=");
    scanf("%d",&n);
    printf("l=");// L est facteur de multiplication.
    scanf("%d",&l);
    if(n<=0){
        printf("impsible le nombre doit etre positive");
    }
    int t[n];
    int i;
    for(i=0;i<n;i++){
    printf("t[%d]=",i);
    scanf("%d",&t[i]);
}
for(i=0;i<n;i++){
printf("%d \t ",t[i]);

}
printf("\n");
for(i=0;i<n;i++){

    printf("t[%d]*%d=%d\t",i,l,l*t[i]);
}


return 0;
}
