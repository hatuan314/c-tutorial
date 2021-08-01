/*
 * input: GDP nam 2014 va toc do tang truong binh quan
 * VD:  GDP(2014) = 100, tang truong binh quan 12,5%
 *      GDP(2015) = GDP(2014) * 12.5% + GDP(2014),
 *      GDP(2016) = GDP(2015) * 12.5% + GDP(2015),
 *      ...
 *      GDP(N) >= 28GDP(2014) => STOP
 * Cong thuc: GDP(N) = GDP(N-1) * toc do tang truong binh quan * 100
 * output: GDP cua cac nam
 */

#include <stdio.h>

#define percent 100

int main() {
    float gdpTemp;
    float gdp14;
    float average;
    int year = 2014;
    // Input
    printf("GDP(2014): ");
    scanf("%f", &gdp14);
    printf("Toc do tang truong kinh te: ");
    scanf("%f", &average);
    gdpTemp = gdp14;
    printf("Nam\t\tGDP\n");
    printf("%d\t\t%.2f\n", year, gdpTemp);
    while (gdpTemp < 2 * gdp14) {
        year++;
        gdpTemp = gdpTemp * (average / percent) + gdpTemp;
        printf("%d\t\t%.2f\n", year, gdpTemp);
    }
    return 0;
}