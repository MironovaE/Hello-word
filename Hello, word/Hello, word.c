#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Hello, word!\n");
	printf("����������, ���!\n");
	printf(":)\n");
	return 0;
}