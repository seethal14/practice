#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],a=0;
    printf("eneter a string\n");
    scanf("%s",&s1);
    printf("enter find string\n");
    scanf("%s",&s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    int index=0;
    for(int i=0;i<len1;i++){
        if(s1[i]==s2[index])  {
            index++;
            
        } 

        
         }
         
    if(len2==index){
        printf("found");
    }
    else{
        printf("not found");
    }
}
