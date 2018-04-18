#include <stdio.h>

/* print Celsius-Fahrenheit table
    for fahr = 0, 20 ..., 30 */
main()
{
	
    float fahr, cels;
    int lower, upper, step;
    
    lower = 0;		/* lower limit of temperature table */
    upper = 300;	/* upper limit */
    step = 20;		/* step size */
    
    cels = lower;
    printf("Celsius\tFahrenheit\n");
    while (cels <= upper) {
    	fahr = (9.0/5.0)*cels+32;
    	printf("%6.0f\t%9.1f\n", cels, fahr);
    	cels = cels + step;
    	
    }
}

