#include <stdio.h>
#include "max.h"
#include "min.h"

int main()
{
	int a1=33;
	int a2=21;
	int maxNum=max(a1,a2);
	int minNum=min(a1,a2);
	printf("max=%d;\nmin=%d;\n",maxNum,minNum);
	return 0;
}
