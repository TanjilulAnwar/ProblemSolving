#include <stdio.h>
#include<string.h>

int main(void) {
int L,N;
scanf("%d",&L);
scanf("%d",&N);
while(N>0)
{
  int W,H;
  scanf("%d %d",&W,&H);
if(W<L || H<L)
{
  printf("UPLOAD ANOTHER\n");
}
else if( W==H)
{
printf("ACCEPTED\n");
}
else {
  printf("CROP IT\n");
}
  N--;
}

 return 0;
}