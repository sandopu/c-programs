#include<iostream>
int main()
{
	int n,i,j;
	std::cin>>n;
	int c=n/365;
	int d=n%365;
	int e=d/7;
	int f=d%7;
	std::cout<<"number  of years";
	std::cout<<c<<"\n";
	std::cout<<"number of weeks";
	std::cout<<e<<"\n";
	std::cout<<"number of days";
	std::cout<<f;
	return 0;
}
