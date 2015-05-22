#include <stdio.h>

/* print Fahrenheit-Celcius table backwards */

main()
{
	int fahr;
		
	for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
		/* the printf does not need {} around it */ 
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}