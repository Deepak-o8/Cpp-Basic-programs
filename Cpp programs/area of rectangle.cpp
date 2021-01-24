#include<iostream>
using namespace std;
class area{
	int l,b;
	public:
	area(int x,int y)
	{
		l=x;
		b=y;
	}
	void display()
	{
		cout<<"area of rectangle is : "<<l*b;
	}
};
int main()
{
	area a(12,4);
	a.display();
	return 0;
}
