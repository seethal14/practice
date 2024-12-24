#include<stdio.h>
int main(){
    int arr[100][100]={{1,5},{10,6}};
    if(arr[1][0]>=arr[0][0]&&arr[1][0]<=arr[0][1]){
        printf("overlaped");
    }
     else if(arr[1][1]>=arr[0][0]&&arr[1][1]<=arr[0][1]){
        printf("overlaped");
    }
    else{
        printf("not overlap");
    }
}
