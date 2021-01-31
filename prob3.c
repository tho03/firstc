#include <stdio.h>

int main(void){
	char ch,h;

	ch = getchar();
	h = getchar();

	h = ch + 1;

	putchar(ch);
	putchar(' ');
	putchar(ch);
	putchar(' ');
	putchar(h);
	putchar(' ');
	putchar(h);
	putchar(' ');
	putchar(h + 1);
	putchar(' ');
	putchar(h + 1);

	
	return 0;
}
