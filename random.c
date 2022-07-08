#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main()
{
  srand((unsigned int)time(NULL));
  int a[3],i;
  int flag=0;
  printf("Tossing a coin...\n");
for(i=0;i<3;i++)
{
   a[i] = rand();
   if(a[i]%2==0)
   {
     flag++;
     printf("Round %d: Heads\n",i+1);
   }
   else{
     printf("Round %d: Tails\n",i+1);
   }
}
printf("Heads: %d, Tails: %d\n",flag,3-flag);

if(flag>1)printf("You won!\n");
else printf("You lost!\n");

return 0;
}
