#include<stdio.h>
#include<string.h>
int main(){
    
   char s1[100]="hello world";
   printf("string is %s\n",s1);
    int length=strlen(s1);
    printf("%d\n",length);
    printf("reversed string\n");
    
    for(int i=length-1;i>=0;i--){
        printf("%s",s1[i]);
        
    }
    



    
    

    
}
