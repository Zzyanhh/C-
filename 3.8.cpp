/*
//�������ڼ�����ڲ��洢��ʽ��float����1λΪ����λ��8λָ����23λβ����32λ��double����1λΪ����λ��11λָ����52λβ����64λ
//��������Ĭ��Ϊ1��0-9�ĸ�λ��ţ���23+1��/4=6����52+1��/4=13��float��ȷ��6λ���ȣ�double����13λ

#include <iostream>
using namespace std;
int main()
{
	float t1 = 5.0 / 4;
	cout << "t1 = " << t1 << endl;   //coutĬ��ȥ��С�������0
	cout.setf(ios_base::fixed, ios_base::floatfield);   //�����ʾ
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