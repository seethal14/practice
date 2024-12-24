#include<stdio.h>
int main(){
    int a,b,diff1;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    if(a>b){
        diff1=a-b;
        printf("difference is %d",diff1);
    }
    else{
        diff1=b-a;
         printf("difference is %d",diff1);

    }
}
