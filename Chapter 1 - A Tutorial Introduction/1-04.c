#include <stdio.h>

/* print Celcius-Fahrenheit table */

main()
{
	float fahr, celcius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	celcius = lower;
	printf("Celcius  Fahr\n\n");
	while (celcius <= upper) {
		fahr = ((9.0/5.0) * celcius) +32.0;
		printf("%7.0f %6.1f\n", celcius, fahr);
		celcius = celcius + step;
	}
}