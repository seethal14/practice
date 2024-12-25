#include<stdio.h>
int main(){
    int arr1[10];
    int arr[100][100]={{2,3},{5,6},{8,5}};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d\n",arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            if(arr[i][j]>arr[i][j+1]){
                int diff1=arr[i][j]-arr[i][j+1];
                // printf("difference is %d\n",diff1);
                arr1[i]=diff1;
                printf("%d",arr1[i]);
            }
            else{
                int diff1=arr[i][j+1]-arr[i][j];
                // printf("difference is %d\n",diff1);
                 arr1[i]=diff1;
                printf("%d",arr1[i]);
            }
        }
    }
}
