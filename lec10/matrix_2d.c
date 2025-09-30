#include<stdio.h>
void print_2D_ptr(int row, int col, int *a);
void matrix_change(int x, int y,int src[][4]);
void matrix_tr(int src[][4],int des[][3]);

int main()
{
	int matrix[3][4]={{1,2,3,1},{4,5,6,4},{7, 8, 9,7}};
	int des[4][3];
	int x=0; int y=2;
	print_2D_ptr(3,4,matrix);
	printf("\n");		
	matrix_change(x, y, matrix);
	matrix_tr(matrix, des);
}
void matrix_change(int x, int y, int src[][4])
{
int temp, i;
for(i=0; i<4; i++)
{
	temp=src[x][i];
	src[x][i]=src[y][i];
	src[y][i]=temp;

}
print_2D_ptr(3,4,src);
}

void matrix_tr(int src[][4], int des[][3])
{
int i, j;
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
des[j][i]=src[i][j];
}
}
print_2D_ptr(4,3,des);
}


void print_2D_ptr(int row, int col,int *a)
{
int i, j;
for(i=0; i<row; i++){
for(j=0; j<col; j++){
printf("%d ", a[i*col + j]);
}
printf("\n");
}
}
