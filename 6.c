#include <stdio.h>
#define DPY 365
#define HPD 24
#define SPH 3600
int main()
{
    int year;
    year = 18;
    int t = year * DPY * HPD * SPH;
    int h = year * DPY * HPD;
    int d = year * DPY;
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n", t,h,d,year);
    return 0;
}