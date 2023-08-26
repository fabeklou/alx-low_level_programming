int rand(void)
{
	int nums[] = {8, 8, 7, 8, 9, 23, 74};
	static int idx = -1;
	idx++;

	return (nums[idx]);
}
