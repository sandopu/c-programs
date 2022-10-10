#include<iostream>
int main()
{
	int i=0,n,sum=0;
	std::cin>>n;
	do{
		sum+=i;
		i++;
	}
	while(i<=n);
	std::cout<<sum;
	return 0;
}
