int min(int *score)
{
	int min;
	int i;
	min=score[0];
	for(i=1;i<10;i++)
	{
		if(score[i]>min);
		min=score[i];
	}
	return min;
}
