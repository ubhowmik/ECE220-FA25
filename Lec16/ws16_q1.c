#include <stdio.h>
#include <string.h>

#define BUF 200

int main(){
    FILE *fp;
    char filename[BUF], word[BUF], line[BUF];
    int linenum=0;

    printf("Input file name: ");
    scanf("%s", filename);
    if( (fp=fopen(filename, "r")) == NULL){
        printf("Cannot open %s.\n", filename);
        return 1;
    }
    printf("Search: ");
    scanf("%s", word);

    while(fgets(line, BUF, fp)){
        linenum++;
        if(strstr(line, word) != NULL)
            printf("Found \"%s\" in line number %d: %s\n", word, linenum, line);
    }
    fclose(fp);
    return 0;
}
