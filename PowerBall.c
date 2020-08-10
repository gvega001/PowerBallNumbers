#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define COUNT 51
#define BALLS 5
#define REDCOUNT 26
#define REDBALLS 1

int main()
{
int lottoball[COUNT];
int redlottoball[REDCOUNT];
int x, y, draw, draw2, b, c;
draw = 0;
draw2=0;
/*seed the randomizer*/
srand((unsigned)time(NULL));

/* initialize the array */
for(x=0; x<COUNT; x++)
{
	lottoball[x] = 0;
}
/* initialize the array for red powerball */
for(x=0; x<REDCOUNT; x++)
{
	redlottoball[x] = 0;
}
while(draw<BALLS)
{
	/*generate a random number */
	b = rand() % COUNT;
	/*confirm that it hasn't yet been drawn*/
	if(lottoball[b] ==0)
	{
		/*mark the ball as drawn*/
		lottoball[b]=1;
		draw++;
	}
}
while(draw2<REDBALLS)
{
	/*generate a random number */
	c = rand() % REDCOUNT;
	/*confirm that it hasn't yet been drawn*/
	if(redlottoball[c] ==0)
	{
		/*mark the ball as drawn*/
		redlottoball[c]=1;
		draw2++;
	}
}
puts("Wining Lotto Numbers:");

for(x=0; x<COUNT; x++)
{
	if(lottoball[x] ==1)
	{
		printf("%3d", x+1);
	}
}

for(y=0; y<REDCOUNT; y++)
{
	if(redlottoball[y] ==1)
	{
		printf("%3d", y+1);
	}
}

putchar('\n');

}