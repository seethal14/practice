#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    printf("enter first name\n");
    scanf("%s",&s1);
    printf("enter the last name\n");
    scanf(" %s",&s2);
    int length1=strlen(s1);
    int length2=strlen(s2);
    int length3=length1+length2;
    char s3[length3];
    for(int i=0;i<length1;i++){
        
            s3[i]=s1[i];

        
        
    }
    
    for(int j=0;j<length2;j++){
        s3[length1]=s2[j];
        length1++;

    }
    for(int i=0;i<(length3);i++){
        printf("%c",s3[i]);
    }
}
