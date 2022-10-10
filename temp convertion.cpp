#include<iostream>
int main()
{
	float f,c;
	int ch;
	std::cin>>ch;
	switch (ch)
	case 1:
	{{   std::cout<<"enter f value\n"; 
	std::cin>>c;
			f=c*90/5+32;
		std::cout<<f;}
		break;
    case 2:
    {   std::cout<<"enter f value\n";
	std::cin>>f;
		c=((f*5)-(5*32))/9;
    	std::cout<<c;
    }
    	break;}
    	return 0;
}
