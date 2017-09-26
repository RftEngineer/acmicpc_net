#include <iostream>

int main(void)
{
	long long int arr[301][301] = {{0,0},};
	int N =0, M = 0;
	arr[0][0] = 0;
	for(int i = 1; i < 301; i++)
	{
		arr[1][i] = i-1;
		arr[i][1] = i-1;
	}
	std::cin>>N>>M;
	for(int i = 2; i <= N; i++)
	{
		for(int j = 2; j <= M; j++)
		{
			if(j == i)
			{
				arr[i][j] = arr[i-1][j] + arr[1][j] + 1;
			}
			else if(j > i)
			{
				arr[i][j] = arr[i-1][j] + arr[1][j] + 1;
			}
			else if(j < i)
			{
				arr[i][j] = arr[i][j-1] + arr[i][1] + 1;
			}
			
		}
		
	}
	
	std::cout<<arr[N][M]<<std::endl;
	return 0;
}