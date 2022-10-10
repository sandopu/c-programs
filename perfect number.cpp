#include<iostream>
int main()
{ std::cout<<"enter an number ";
    
	int i,n,c=0;
	std::cin>>n;
	int d=n/2;
	for(i=1;i<=d;i++)
	{
	
	   if(n%i==0){
	   	 std::cout<<i<<",";
	   	c=c+i;
	}   }
	  std:: cout<<c;
	  if (n==c)
	  {
	  	std::cout<<"\ngive number is an perfect number";
	  }
	  else{
	  	std::cout<<"\n not a perfect number";
	  }
	
	return 0;
}
