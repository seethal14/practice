#include<stdio.h>
int main(){
    int arr[100][100]={{2,3},{5,6},{8,5}};
    printf("%d\n",arr[0][0]);
     printf("%d\n",arr[0][1]);
      printf("%d\n",arr[1][0]);
       printf("%d\n",arr[1][1]);
        printf("%d\n",arr[2][0]);
        printf("%d\n",arr[2][1]);
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d\n",arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            if(arr[i][j]>arr[i][j+1]){
                int diff1=arr[i][j]-arr[i][j+1];
                printf("difference is %d\n",diff1);
            }
            else{
                int diff1=arr[i][j+1]-arr[i][j];
                printf("difference is %d\n",diff1);
            }
        }
    }
}
