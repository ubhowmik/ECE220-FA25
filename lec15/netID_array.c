#include <stdio.h>
#include<string.h>
int main()
{
    char name[3][10]={{"abc"},{"bcd"},{"def"}};
    printf("%s\n", *(name+1));

    printf("%s\n", name[1]);

    
    char *netID[3];
    
    netID[0]=*name;
    netID[1]=*(name+1);
    netID[2]=*(name+2);
    
    
    printf("%s\n", netID[1]);

    return 0;
}
