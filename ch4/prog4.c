#include <stdio.h>

int main()
{
	char ary1[4] = "xyz";
	puts(&(ary1[1]));
	puts(&(1[ary1]));
	puts(ary1+1);
	return 0;
}
