#include <stdio.h>

enum month{JAN=3, FEB, MAR=7, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main()
{
	enum month current;
	current = JUN;
	printf("cur_month is %d\n", current);

	return 0;
}
