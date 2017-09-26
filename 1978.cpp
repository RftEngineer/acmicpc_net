#include <iostream>
#include <cmath>

bool isPrime (int num)
{
    if (num <=1)
        return false;
    else if (num == 2)         
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}

int main(void)
{
	int result = 0;
	int input1 = 0;
	int tmp = 0;
	std::cin>>input1;
	
	for(int i = 0; i < input1; i++)
	{
		std::cin>>tmp;
		if(isPrime(tmp))
			result++;
		
	}
	
	std::cout<<result<<std::endl;
	
	
	return 0;
}