#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
		void show();	
		date(int,int,int);
		date(date&);
};
date::date(int d,int m,int y)
{
	 dd=d;
	 mm=m;
	 yy=y;
	
}
void date::show()
{
	cout<<"Date is: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
date::date(date &d_new){
	dd=d_new.dd;
	mm=10;
	yy=d_new.yy;
}
int main(){
	date d(18,9,23);
	d.show();
	date d1(d);
	d1.show();
}

