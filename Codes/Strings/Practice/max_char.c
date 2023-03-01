#include <stdio.h>
#define s 50 
#define c 100 
int main()
{
   char str[s];
   int freq[c],i=0,max,value;
   printf("Enter the string:");
   scanf("%s",str);
   for(i=0; i<c; i++)
   {
    freq[i] = 0; 
   }
   i=0;
   while(str[i] != '\0')
   {
    value = (int)str[i];
    freq[value] += 1;
    i++;
   }
   max = 0;
   for(i=0; i<c; i++)
   {
    if(freq[i] > freq[max])
    max = i;
    }
    printf("Maximum occurrence character is '%c' = %d times\n", max,
    freq[max]);
   return 0;
}