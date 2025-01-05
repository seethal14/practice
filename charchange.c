#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    printf("enter a string\n");
    scanf("%s",&s1);
    char c1={'e'};
    int length=strlen(s1);
    for(int i=0;i<length;i++){
        if(s1[i]=='a'){
            s1[i]=c1;
        }
    }
    printf("changed string");
    for(int i=0;i<length;i++){
        printf(" %c",s1[i]);
    }
}
