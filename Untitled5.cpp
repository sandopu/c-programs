#include<iostream>
#include<string.h>
int main()
{
	int b, a[10]={10,9,6,7};
	for(int i=0;i<8;i++)
	{
		if(a[i]>a[i+1])
		{  int temp=a[i+1];
		a[i++]=b;
		b=temp;
		    
			std::cout<<a[i]<<"\n";
		}
		
		
	}
}
