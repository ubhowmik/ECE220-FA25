#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *p1,*p2;
    int m1, m2;
    m1 = 10;
    m2 = 2000000; // change the size to 20000 and check the address
    p1 = (char*)malloc(m1);
	printf("%p\n",p1);
    strcpy(p1, "Codesdope");
	p2 = (char*)realloc(p1, m2);
	printf("%p\n",p2);
    strcat(p2, "Practice");
    printf("%s\n", p2);
	free(p2);
//	free(p1);
    return 0;
}

