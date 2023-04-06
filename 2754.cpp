#include <stdio.h>

int main()
{
    double a = 234.345 , b = 45.698 ;

    printf("%0.6lf - %0.6lf\n",a,b);
    printf("%0.0lf - %0.0lf\n",a,b);
    printf("%0.1lf - %0.1lf\n",a,b);
    printf("%0.2lf - %0.2lf\n",a,b);
    printf("%0.3lf - %0.3lf\n",a,b);
    printf("%e - %e\n",a,b);
    printf("%E - %E\n",a,b);
    printf("%g - %g\n",a,b);
    printf("%g - %g\n",a,b);


    return 0;
}

