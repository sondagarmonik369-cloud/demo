#include<stdio.h>
#include<math.h>

float avg(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    float avg = (float)sum / n;
    printf("\nAverage of the elements is: %.2f", avg);
    return avg;
}

float sd(float avg, int n, int a[])
{
    float sum = 0, sd;
    int i;
    for (i = 0; i < n; i++)
        sum += pow(a[i] - avg, 2);
    sd = sqrt(sum / n);
    printf("\nStandard deviation is: %.4f", sd);
    return sd;
}

void normalization(float avg, int a[], float sd, int n)
{
    printf("\nNormalized values:");
    for (int i = 0; i < n; i++)
    {
        float z = (a[i] - avg) / sd;
        printf("\n  a[%d] = %d -> z = %.4f", i, a[i], z);
    }
}

int main()
{
    int a[] = {23, 45, 28, 65, 87, 4};
    int n = 6;

    printf("your elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    float result = avg(a, n);
    float standard_deviation = sd(result, n, a);
    normalization(result, a, standard_deviation, n);

    return 0;
}