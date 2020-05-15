#include <iostream>
#include <vector>

using namespace std;


int charToInt(char c)
{
	return int(c)-48;
}

int main()
{
	vector<int> bigNum{2};
	int exp = 1000;
	int carry;	
	for(auto i=2; i<=exp; ++i)
	{
		carry = 0;
		for(auto j=0; j<bigNum.size(); ++j)
		{
			auto prod = bigNum[j]*2 + carry;
			bigNum[j] = prod%10;
			carry = prod/10;
		}
		while(carry)
		{
			bigNum.push_back(carry%10);
			carry/=10;		
		}
	}
	while(carry)
	{
		bigNum.push_back(carry%10);
		carry/=10;		
	}
	auto sum = 0;
	for(auto i: bigNum)
		sum+=i;
  // Uncomment for printing Big Fat Number
	//for(int i = bigNum.size()-1; i>=0; --i)
	//	cout<<bigNum[i];
	cout << "sol: " << sum;
	
	return 0;
}
