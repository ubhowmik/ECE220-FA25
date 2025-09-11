#include <stdio.h>

int main(){

    int num1, num2, res;
    char op;

    printf("Ener operand operator(+, -, *, or /) operand in order: ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch(op){
        case '+':
            res = num1+ num2;
            break;
        case '-':
            res = num1 - num2;
            break;
       case '*':
            res = num1*num2;
            break;

	    case '/':
            res = num1/num2;
            break;
       	default:
            printf("invalid\n");
    }
    printf("res: %d\n", res);

}

