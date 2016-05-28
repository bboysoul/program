#include <stdio.h>
int max();
int min();
int main()
{
	int score[10]={67,98,75,63,82,79,81,91,66,84};
	int maxnum;
	int minnum;
	minnum=min(score);
	maxnum=max(score);
	printf("%d\n%d\n",maxnum,minnum);	
	return 0;
}
