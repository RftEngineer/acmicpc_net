#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n = 0, temp = 0;
	std::vector<int> arrange1;
	std::vector<int> max_value;
	std::cin>>n;
	arrange1.resize(n+1);
	max_value.resize(n+1);
	max_value[0] = 0;
	
	
	for(int i = 1; i <= n; i++)
	{
		std::cin>>temp;
		arrange1[i] = temp;
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			max_value[i] = std::max(max_value[i], max_value[i-j] + arrange1[j]);
		}
	}
	std::cout<<max_value[n]<<std::endl;
	return 0;
}