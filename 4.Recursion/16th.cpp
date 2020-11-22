
#include <stdio.h>

void funny()
{
	char ch;
	scanf("%c", &ch);
	if(ch!='\n')
		funny();
	printf("%c", ch);
}

int main()
{
	// will work as gets(), terminates at '\n'
	funny();
	printf("\n");
	return 0;
}
