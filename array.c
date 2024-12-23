#include<stdio.h>
int main(){
    int ar[100],temp,i,min,n;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    min=ar[0];
    for(i=0;i<=n;i++){
        if(ar[i]<min){
            temp=ar[i];
            ar[i]=min;
            min=temp;
        }
    }
    printf("tha smallest number %d",min);


}
