#include <stdio.h>
#include <stdlib.h>

void calc_esfera(float R, float *area, float *volume);

void main()
{
    float raio, area, volume;
    raio = 4.45;
    calc_esfera(raio, &area, &volume);
    printf("raio =%f  |  area = %f | volume = %f\n", raio, area, volume);
}

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4* 3.141592 * R * R;
    *volume = (4* 3.141592 * R * R*R)/3;
}