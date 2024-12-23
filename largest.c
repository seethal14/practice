#include<stdio.h>
int main(){
    int ar[100],temp,i,max,n;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    max=ar[0];
    for(i=0;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
        }
    }
    printf("tha largest number %d",max);


}
