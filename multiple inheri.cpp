#include<iostream>
class base
{
	public:
		void a()
	{
		std::cout<<"world";
	}
};
class base1
{
public:
	void b()
	{
		std::cout<<"bot";
	}
};
class derived:public base,public base1
{
	public:
		void c()
		{
			std::cout<<"hello";
		}
};
int main()
{
	derived obj;
	obj.c();
	obj.b();
	obj.a();
	return 0;

}
