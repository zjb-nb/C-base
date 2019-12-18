#include <stdio.h>
#include <string.h>

int main ()
{
   char name[2][30];
   int i=0;
   memset(name,0,sizeof(name));
   for(i=0;i<2;i++)
   {
      scanf("%s",name[i]);
   }
   for(i=0;i<2;i++)
   {
      printf("%s\n",name[i]);
   }
return 0;
}
