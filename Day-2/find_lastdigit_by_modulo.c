#include<stdio.h>
int main() {
	int number,lastdigit;
	printf("enter number");
	scanf("%d",&number);
	lastdigit = number%10;
	printf("the lastdigit of is = %d\n",lastdigit,number);
	return 0;
}
