#include<stdio.h>

int comp(int a,int b){
if(a>b){
    printf("max est :%d",a);
}
else
    printf("max est :%d",b);
}

int main(){
    int nb1,nb2,max;
    printf("nombr1=");
    scanf("%d",&nb1);
    printf("nombr2=");
    scanf("%d",&nb2);
    max=comp(nb1,nb2);
    printf("max=%d",max);
    return 0;

}


