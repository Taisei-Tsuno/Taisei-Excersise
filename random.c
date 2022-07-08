#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
int main()
{
  char name[100];
  srand((unsigned int)time(NULL));
  int a[3],i;
  int flag=0;
  printf("Who are you?\n >");
  scanf("%s",name);
  printf("Hello,%s!\n",name);
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
return 0;
}
