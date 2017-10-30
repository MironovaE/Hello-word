#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Hello, word!\n");
	printf("Здравствуй, мир!\n");
	printf(":)\n");
	return 0;
}