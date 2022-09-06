#include<iostream>
class base
{
	public:
		void a()
	{
		std::cout<<"world";
	}
};
class derived:public base
{
	public:
		void b()
		{
			std::cout<<"hello";
		}
};
int main()
{
	derived obj;
	obj.b();
	obj.a();
	return 0;

}
