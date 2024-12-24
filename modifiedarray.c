#include<stdio.h>
int main(){
    int arr[100],sum=0,count=0,i,n,average;
    printf("enter the  size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
        count++;
    }
    printf("sum of elements %d\n",sum);
    printf("number of elements %d\n",count);
    average=sum/count;
    printf("average %d\n",average);
    for(i=0;i<n;i++){
        arr[i]=average-arr[i];
    }
    printf("modified array\n");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    
}
