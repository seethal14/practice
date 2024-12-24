#include<stdio.h>
int main(){
    int arr[]={2,9};
    for(int i=arr[0];i<=arr[1];i++){
        printf("%d",i);
    }#include<stdio.h>
int main(){
    int a=0;
    int arr[100][100]={{1,5},{4,10}};
    for(int i=arr[0][0];i<=arr[0][1];i++){
        printf("%d\n",i);
        if(i==arr[1][0]){
            a=1;

        }
       
        
    }
    if(a==1){
        printf("overlaped\n");
    }
    else{
        printf("not overlap\n");
    }
    
    
    
    }

}
