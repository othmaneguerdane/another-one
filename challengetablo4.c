#include<stdlib.h>
#include<stdiO.h>
int main(){
    int n,s,max;
    s=0;
    printf("n=");
    scanf("%d",&n);
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
max=t[0];
for(i=1;i<n;i++){
    if(t[i]>=max){
        max=t[i];
    }
}
printf("max=%d",max),

return 0;
}
