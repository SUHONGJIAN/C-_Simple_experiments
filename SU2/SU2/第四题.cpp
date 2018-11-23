#include <iostream>
using namespace std;
int max(int x,int y);
int max(int x, int y, int z);
double max(double x, double y = 66.6);

void main()
{
	int max_num,x,y,i,j,k;
	double max_num2,t;

	cout << "请输入两个数：";
	cin >> x >> y;
	max_num = max(x, y);
	cout <<"最大数为："<< max_num << endl << endl;

	cout << "请输入三个数：";
	cin >> i >> j >> k;
	max_num = max(i, j, k);
	cout << "最大数为：" << max_num << endl << endl;;

	cout << "请输入一个double数：（默认参数值为66.6）";
	cin >> t;
	max_num2 = max(t);
	cout << "最大数为：" << max_num2 << endl;

 	system("pause");
}

int max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int max(int x, int y, int z)
{
	if (x > y)
		if (x > z)
			return x;
		else
			return z;
	else
		if (y > z)
			return y;
		else
			return z;
}

double max(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}