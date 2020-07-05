#include<iostream>
#include<vector>

using namespace std;

bool isPrime(int num)
{
	int count = 0;
	for(int i = 1; i <= num; i++)
	{
		if(num % i == 0)
			count++;

		if(count >=3)
			return false;
	}

	return true;
}

int main(int argc, char const *argv[])
{
	vector<long long> v;
	v.push_back(2); int count = 1;

	for(long long i = 3; i < 1000000; i++)
	{
		if(isPrime(i))
		{
			count++;
			v.push_back(i);
		}

		if(count == 10001)
		{
			std::cout<<"10001th Prime number = "<<v[10000]<<endl;
			break;
		}
	}
	
	return 0;
}