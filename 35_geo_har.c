#include <stdio.h>
#include <math.h>
int main()
{
   float a[50], sum = 0, sum2 = 0, sum1 = 1, avg, geo, har;
   int i, n;
   printf("How many numbers you want to enter : ");
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      printf("Enter Value at Position [%d] : ", i + 1);
      scanf("%f", &a[i]);
      sum = sum + a[i];
      sum1 = sum1 * a[i];
      sum2 = sum2 + (1.0 / a[i]);
   }
   avg = sum / n;
   geo = pow(sum1, (1.0 / n));
   har = n * pow(sum2, -1);

   printf("Average = %f\n", avg);
   printf("Geometric Mean = %f\n", geo);
   printf("Harmonic Mean = %f", har);
   return 0;
}
