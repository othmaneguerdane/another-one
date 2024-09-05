#include<stdio.h>

int add(int a,int b){
return a+b;
}

int main(){
    int nb1,nb2,somme;
    printf("nombr1=");
    scanf("%d",&nb1);
    printf("nombr2=");
    scanf("%d",&nb2);
    somme=add(nb1,nb2);
    printf("somme=%d",somme);
    return 0;

}
