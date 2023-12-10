


#include <stdarg.h>

double average(int count, ...)
{
    va_list ap;
    int i;
    double sum = 0.0;
    
    va_start(ap, count);
    
    for (i = 0; i < count; i++)
    {
        sum += va_arg(ap, int);
    }
    
    va_end(ap);
    
    return sum / count;
}