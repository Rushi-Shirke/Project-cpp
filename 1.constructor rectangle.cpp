#include<iostream>
using namespace std;
class rectangle
{
	private:
		int len,bre;
	public:
		rectangle();
		rectangle(int l,int b);
		int rectarea();
};
rectangle::rectangle()
{
	len=4;
	bre=5;
}
rectangle::rectangle(int l,int b)
{
	len=l;
	bre=b;
}
int rectangle::rectarea()
{
	return len*bre;
}
main()
{
	rectangle r1;
	cout<<"\n Area of rectangle="<<r1.rectarea();
	
	rectangle r2(9,8);
	cout<<"\n Area of rectangle="<<r2.rectarea();
	cout<<"\n Hello World";
}
