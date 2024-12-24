#include<stdio.h>
int main(){
    int a=0;
    int arr[100][100]={{5,10},{1,6}};
    for(int i=arr[0][0];i<=arr[0][1];i++){
       
        
     for(int j=arr[1][0];j<=arr[1][1];j++){
           
            if(i==j){
                a=1;
            }
        }
       
        
    }
    if(a=1){
        printf("overlaped\n");
    }
    else{
        printf("not overlap\n");
    }
    
    
    
    }
