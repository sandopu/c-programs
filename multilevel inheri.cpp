#include<iostream>
class base
{
	public:
		void a()
	{
		std::cout<<"a";
	}
};
class derived:public base
{
	public:
		void b()
		{
			std::cout<<"b";
		}
};
class derived1:public derived
{
	public:
		void c()
		{
			std::cout<<"c";
		}
};
int main()
{
	derived1 obj;
	obj.c();
	obj.b();
	obj.a();
	return 0;}


