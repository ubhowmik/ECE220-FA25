// C to demonstrate %n in scanf() and printf() 
#include <stdio.h> 

// Driver Code 
int main() 
{ 
	int check; 
	int a, b; 

	//printf with %n

	// Input two variables 
	scanf("%d%d%n", &a, &b, &check); 

	// Print value of a, b, and check 
	printf("%d\n%d\n%d", a, b, check); 

printf("\n");	
	// printf with %n
	int count = 0;
    	printf("Hello, world!%n", &count);
    	printf("\nNumber of characters printed: %d\n", count);

	return 0; 
} 

