#include <stdio.h>
#include <string.h>

#define BUF 200

int main(){
    FILE *fpin, *fpout;

    char srcname[BUF], desname[BUF], word[BUF], line[BUF], rep[BUF], newstr[BUF];
    char *ptr;
    int len;

    printf("Enter the input file name: ");
    scanf("%s", srcname);
    if( (fpin=fopen(srcname, "r")) == NULL){
        printf("Cannot open %s.\n", srcname);
        return 1;
    }
    printf("Enter the output file name: ");
    scanf("%s", desname);
    if( (fpout=fopen(desname, "w")) == NULL){
        printf("Cannot open %s.\n", desname);
        return 1;
    }

    printf("search: ");
    scanf("%s", word);
    len = strlen(word);

    printf("replace: ");
    scanf("%s", rep);

    while(fgets(line, BUF, fpin)){
        if( (ptr=strstr(line, word)) != NULL){
			newstr[BUF]='\0';
            //*newstr = '\0';
            strcpy(newstr, rep);
            strcat(newstr, ptr+len);
            strcpy(ptr, newstr);
        }
        fprintf(fpout, "%s", line);
    }
    fclose(fpin);
    fclose(fpout);
    return 0;
}

