#include<iostream>
#include<string>
using namespace std;
//�ݹ��ж��Ƿ�����������
int childLength(int n, int m, int len);
int main()
{
	int n, m;
	cin >> n >> m;
	int len = 1;
	int res;
	while (n != 0 && m != 0)
	{
		res = childLength(n, m, 1);
		cout << res << endl;
		cin >> n >> m;
	}
	return 0;
}
int childLength(int n, int m, int len)
{
	if (n * 2 <= m)
	{
		len++;
		len = childLength(n * 2, m, len);
	}
	if (n * 2 + 1<= m)
	{
		len++;
		len = childLength(n * 2 + 1, m, len);
	}
	return len;
}
