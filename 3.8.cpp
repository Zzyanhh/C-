/*
//浮点数在计算机内部存储方式，float（第1位为符号位，8位指数，23位尾数）32位；double（第1位为符号位，11位指数，52位尾数）64位
//整数部分默认为1，0-9四个位存放，（23+1）/4=6；（52+1）/4=13，float能确保6位精度，double则是13位

#include <iostream>
using namespace std;
int main()
{
	float t1 = 5.0 / 4;
	cout << "t1 = " << t1 << endl;   //cout默认去掉小数后面的0
	cout.setf(ios_base::fixed, ios_base::floatfield);   //定点表示
	cout << "tt1 = " << t1 << endl;

	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;
	cout << "tub = " << tub << endl;
	cout << "a million tub = " << million*tub ;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million * tub << endl;
	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;

	return 0;
}
*/