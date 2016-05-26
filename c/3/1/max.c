int max(int *score)
{
	int max=score[0];
	int i;
	for(i=1;i<10;i++)
	{
		if(score[i]>max)
		max=score[i];
	}
	return max;
}
