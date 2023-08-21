int rand(void)
{
	int nums[] = {8, 8, 7, 9, 23, 74};
	static int idx = -1;
	idx++;

	return (idx < 6) ? (nums[idx]) : ((idx * idx) % 30000);
}
