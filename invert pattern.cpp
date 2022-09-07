#include<iostream>
int main()
{
		int i,j,rows;
		std::cin>>rows;
		
	
	for(i=rows;i>=1;i--)
	{
		for(j=1;j<=rows;j++)
		 if(i>=j){
			std::cout<<"*";}
		else
		{
			std::cout<<" ";
		}
		std::cout<<"\n";
	}
	return 0;}
