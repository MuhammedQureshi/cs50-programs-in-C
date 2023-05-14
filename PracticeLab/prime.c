#include <cs50.h>
#include <stdio.h>

bool isPrime(int number);

int main ()
{
    int min;
    int max;
    printf("Enter the minimum value: ");
    scanf("%d", &min);
    printf("Enter the maximum value: ");
    scanf("%d", &max);

    for(int i = min; i <= max; i++)
    {
      if(isPrime(i))
      {
         printf("%d\n", i);
      }
    }
    return 0;
}



bool isPrime(int number)
{
   if(number <= 1)
   {
      return false;
   }
   for(int i = 2; i*i <= number; i++)
   {
     if(number % i == 0)
     {
        return false;
     }
   }
   return true;
}