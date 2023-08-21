int rand(void)
{
	int nums[] = {9, 8, 10, 24, 75, 9};
	static int idx = -1;
	idx++;
	return (nums[idx]);
}
