#include<iostream>
using namespace std;
class Num 
{
	int n;
	public :
		void get();
		Num add(Num &n1)
		{
			Num n3;
			n3.n= this->n + n1.n;
			return n3; 
		}		
		void show();
};
void Num :: get()
{
	n = 10;
}

void Num :: show()
{
	cout << "Sum Of two Objs : " << n;
}
int main()
{
	Num n1, n2, n4;
	n1.get();
	n4 = n2.add(n1);
	n4.show();
}
