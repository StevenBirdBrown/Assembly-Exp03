#include <stdio.h>
short do_loop(short x,short y,short k)
{
	do
	{
		x*=(y%k);
		k--;
	}
	while((k>0)&&(y>k));

	return x;
}
int main()
{
	short x,y,k;
	scanf("%d %d %d",&x,&y,&k);
	do_loop(x,y,k);
	return 0;
}
