/*
#include <iostream>
using namespace std;
int main()
{
	const int Arsize = 20;
	char name[Arsize];
	char dessert[Arsize];

	//cout << "enter your name: ";
	//cin.get(name, Arsize);
	//cout << "enter your favorite dessert: ";
	//cin.get(dessert, Arsize);  //读到缓冲区的回车直接结束
	//cout << "i have some delicious " << dessert << " for you," << name << ".\n";   //cin.get不丢弃换行符

	cout << "enter your name: ";
	cin.get(name, Arsize);
	cin.get();   //消耗掉一个字符（回车）
	cout << "enter your favorite dessert: ";
	cin.get(dessert, Arsize).get();   //cin.get()返回的类型为cin
	cout << "i have some delicious " << dessert << " for you," << name << ".\n";  

	return 0;
}
*/