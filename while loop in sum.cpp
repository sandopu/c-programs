#include<iostream>
int main()
{
	int i=1,n,sum=0;
	std::cin>>n;
	while(i<=n){
		sum+=i;
		i++;
	}
	std::cout<<sum;
	return 0;
}
