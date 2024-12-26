#include<stdio.h>
#include<string.h>
int main(){
    int a=0;
    char s1[]="hello class";
    int length=strlen(s1);
    printf("%d",length);
    char s2={'c'};
    for( int i=0;i<length;i++){
        if(s1[i]==s2){
            a=1;

        }
        
    }
    if(a==1){
        printf("character found");
    }
    else{
        printf("character not found");
    }
    
}
