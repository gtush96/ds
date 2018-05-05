/* C Program to Reverse an Array using While loop */
#include<stdio.h>

int main()
{
   int a[100], i, j, Size, Temp;

   printf("\nPlease Enter the size of an array: ");
   scanf("%d",&Size);

   //Inserting elements into the array
   for (i = 0; i < Size; i++)
   {
      scanf("%d", &a[i]);
   }

   j = Size - 1;   // Assigning j to Last array element
   i = 0;       // Assigning i to first array element

   while (i < j)
   {
      Temp = a[i];
      a[i] = a[j];
      a[j] = Temp;
      i++;
      j--;
   }

   printf("\nResult of an Reverse array is: ");
   for (i = 0; i < Size; i++)
   {
      printf("%d \t", a[i]);
   }

   return 0;
}
