#include<iostream>

void findnthPrimeNum(int n1)
{
	int n = n1 * 100; // allocating more space 
	int *arr = new int[ (n+1) * sizeof(int)];
	arr[0] = -1, arr[1] = -1; // intializing 0th and 1st element in array to -1

	for(int i = 2; i <= n ; i++) // intializing the values from 2 till n
	{
		arr[i] = i;
	}

	// could have avoided above intialization by using boolian array / vector
	for(int i = 2; i <=n; i++)
	{
		if(arr[i] != -1)
		{
			for(int j = arr[i] + i; j <= n;)
			{
				if(arr[j] != -1)
					arr[j] = -1;

				j = j+i;
			}
		}
	}
	std::cout<<std::endl;
	int count = 0, i = 0;
	for(i =0; i <=n; i++)
	{	
		if(arr[i] != -1)
			count++;

		if(count == n1)
			break;
	}

	std::cout<< "The" << n1 <<"th prime number = "<<arr[i] << std::endl;

}

int main(int argc, char const *argv[])
{
	int n;
	std::cin>>n;
	findnthPrimeNum(n);
	return 0;
}