#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],c1,c2;
    printf("enter a string\n");
    scanf("%s", &s1);

    printf("enter changed character\n");
    scanf(" %c",&c1);

    printf("enter new character\n");
    scanf(" %c",&c2);
    int length=strlen(s1);
    for(int i=0;i<length;i++){
        if(s1[i]==c1){
            s1[i]=c2;
        }
    }
    printf("changed string\n");
    for(int i=0;i<length;i++){
        printf("%c",s1[i]);
    }
}
