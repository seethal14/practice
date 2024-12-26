#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    printf("eneter a string\n");
    scanf("%s",&s1);
    printf("enter find out string\n");
    scanf("%s",&s2);
    if(strstr(s1,s2)!=NULL){
        printf("string is found");
    }
    else{
        printf("not found");
    }
