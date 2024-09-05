#include<stdio.h>

int mul(int a,int b){
return a*b;
}

int main(){
    int nb1,nb2,prod;
    printf("nombr1=");
    scanf("%d",&nb1);
    printf("nombr2=");
    scanf("%d",&nb2);
    prod=mul(nb1,nb2);
    printf("somme=%d",prod);
    return 0;

}

