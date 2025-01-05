#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],c;
    printf("enter string\n");
    scanf("%s",&s1);
    printf("enter the character\n");
    scanf(" %c",&c);
    int count=0;
    int length=strlen(s1);
    for(int i=0;i<length;i++){
        if(s1[i]==c){
            count++;

        }
    }
    printf("count of character %d\n",count);

}
