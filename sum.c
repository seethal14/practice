#include<stdio.h>
int main(){
    int arr[100],sum=0,i,n;
    printf("enter the  size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("sum of elements %d",sum);
}
