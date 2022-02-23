#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main()
{
    float raio, area;

    printf("Raio: \n");
    scanf("%f", &raio);

    area = (raio*raio)*pi;

    printf("Área: %.4f", area);
    return 0;
}
