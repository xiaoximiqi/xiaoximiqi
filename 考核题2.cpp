#include <iostream>
using namespace std;
class multi
{
	public:
		int yuan_num;
		int xian_num;
	void show()
		{
			cout<<yuan_num<<" "<<xian_num<<endl; 
		}
};
class squares:public multi
{
	void set_num(int y_num,int x_num)
	{
		yuan_num=y_num;
		xian_num=x_num;
		xian_num=yuan_num*2;
	} 
	void show1()
	{
		cout<< yuan_num+xian_num<<endl;
	}
};
class thmulti:public multi
{
	void set_num(int y_num,int x_num)
	{
		yuan_num=y_num;
		xian_num=x_num;
		xian_num=yuan_num*3;
	} 
};
