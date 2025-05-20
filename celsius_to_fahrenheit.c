#include<stdio.h>

int main()
{
    float c, ft;
    scanf("%f", &c);

    ft = (c * 1.8) + 32;

    printf("%.1f°C équivaut à %.1f°F\n",c,ft);
    return 0;
}