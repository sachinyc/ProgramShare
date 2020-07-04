#include<iostream>
using namespace std;

void findSumOfEvenDigits(std::string str)
{
	// cosidering '0' (zero) as even number
	int evenCount= 0;
	int evenSum = 0;

	for(auto c : str)
	{
		if( (c-'0') % 2 == 0)
		{
			evenCount++;
			evenSum += c - '0' ;
		}
	}

	cout<<endl<<"Even Count = "<<evenCount<<endl;
	cout<<endl<<"Even evenSum = "<<evenSum<<endl;
}

void Mulltiply(std::string &s, int num)
{
	// stroring the num in reverse order so that calulcation will be easy
	// 1234 will be stored as 4321

	int carry = 0;
	std::string tempString = "";
	for(int i = 0; i < s.size(); i++)
	{
		int valAtStri = s[i] - '0';
		int temp = (valAtStri * num) + carry;
		carry = temp / 10;
			int x =  temp % 10;
			tempString += to_string(x);
	}

	if(carry)
		tempString = tempString + to_string(carry);

	s = tempString;
}

string findFactorial(int n)
{
	std::string valueInString = "1"; //Storing value 1 in string for easy calculation factorial of 1 = 1
	for(int i = 2; i <= n; i++)
	{
		Mulltiply(valueInString, i);
	}

	return valueInString;
}

int main(int argc, char const *argv[])
{
	int n = 7;
	//cin>>n;

	std::string valInString = findFactorial(n);

	findSumOfEvenDigits(valInString);
	return 0;
}