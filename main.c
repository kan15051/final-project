#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "register.h"



int main(){
    CreateAccout();
    char filename[100];
    printf("enter username: ");
    scanf("%s",filename);
    //fgets(filename, 100, stdin);
    printf("%s",filename);
    UserInfo user;
    OpenInfo(filename,&user);
    ShowInfo(&user);
    return 0;
}