#include<iostream>
using namespace std;




int main()
{
	int a;
	int b;
	int c;
	cout << "���� �Է� : ";
	cin >> a;
	while (true)
	{
		cout << "���� �Է� : ";
		cin >> b;
		if (a != b) {
			a = b;
			continue;
		}
		cout << "���� �Է� : ";
		cin >> c;
		if (b != c)
		{
			a = c;
			continue;
		}
		else
		{
			cout << c << "�� �������� 3ȸ ���Ծ��!" << endl;
		}
	}

	


}