#include<iostream>
int main()
{ int n;
	std::cin>>n;
int a[n],c;
for(int i=0;i<=n;i++){
std::cin>>a[i];
}
for(int i=0;i<=n;i++)
 {
    for(int j=0;j<=n;j++)
	{
	    if(a[i]=a[j+1])
		{
		 int c=a[i]; 
}       	 std::cout<<c<<"\n hello";
		
	}
} 
   return 0;
}
