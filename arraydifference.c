#include<stdio.h>
int main(){
    int diff1;
    int arr[2]={56,98};
    if(arr[0]>arr[1]){
         diff1=arr[0]-arr[1];
        printf("difference is %d\n",diff1);
    }
    else{
        diff1=arr[1]-arr[0];
         printf("difference is %d\n",diff1);

    }
}
