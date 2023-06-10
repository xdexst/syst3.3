#include <stdio.h>
int main () {
	int a = 3;
	int b = 6;
	while ( a != b ) {
		if ( a > b ) a -= b; 
			else b -= a; }
	printf("Вывод a=%d b=%d.\n", a, b);
	return 0;
}
