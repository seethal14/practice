#include<stdio.h>
int main(){
    int arr[100],temp,i,j,n;
    printf("enter the  size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-2;i++){
        for(j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted array\n");
    for(i=0;i<n;i++){

        printf(" %d\n",arr[i]);
    }
    printf("secondsmallest number\n %d",arr[1]);


}
