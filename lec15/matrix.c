#include<stdio.h>
int main()
{
FILE *in;
in=fopen("matrix.txt","r");
int m, n;
fscanf(in,"%d%d",&m, &n);
int i,j;
int mat[m][n];
for(i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
		fscanf(in,"%d", &mat[i][j]);
	}


}

fclose(in);
FILE *out;
out=fopen("matrix_out.txt","w");
fprintf(out,"%d %d", n, m);
fprintf(out,"\n");
for(i=0;i<n;i++)
{
	for (j=0;j<m;j++)
	{
		fprintf(out,"%d ", mat[j][i]);
	}
fprintf(out,"\n");

}



/*
for(i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
		printf("%d ", mat[i][j]);
	}
printf("\n");

}
printf("\n");
}
*/
}
