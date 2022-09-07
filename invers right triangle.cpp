#include<iostream>
int main()
{
		int i,j,rows;
		std::cin>>rows;
		
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		 {
		 if(j>=i){
			std::cout<<" *";}
		else
		{
			std::cout<<"  ";
		}}
		std::cout<<"\n";
	}
	return 0;}
