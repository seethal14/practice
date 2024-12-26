#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],s3[100];
    printf("eneter a string\n");
    scanf("%s",&s1);
    printf("enter find out string\n");
    scanf("%s",&s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    for(int i=0;i<len2;i++){
        for(int j=0;j<len1;j++){
            if(s2[i]==s1[j]){
                s3[i]=s1[j];
                i++;

            }
        }
    }
    

    if(s3==s2){
        printf("found");
    }
    else{
        printf("not found");
    }
}
