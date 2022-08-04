#include<iostream>
using namespace std;
class part
{
	private:
		int partid;
		string partname;
		float partprice;
	public:
		part()
		{
			partid=123;
			partname="compressor";
			partprice=120.36;
		}
		part(int i,string n,float p)
		{
			partid=i;
			partname=n;
			partprice=p;
		}
		part(part &obj)
		{
			partid=obj.partid;
			partname=obj.partname;
			partprice=obj.partprice;
		}
		void display()
		{
			cout<<"\n Part Id="<<partid;
			cout<<"\n Part name="<<partname;
			cout<<"\n Part price="<<partprice;
		}
};
main()
{
	part q1;
	q1.display();
	part q2(159,"airfilter",4500);
	q2.display();
	part q3(q1);
	q3.display();
}
