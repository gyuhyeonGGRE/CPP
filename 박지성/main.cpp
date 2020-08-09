#include<iostream>
using namespace std;




int main()
{
	int a;
	int b;
	int c;
	cout << "숫자 입력 : ";
	cin >> a;
	while (true)
	{
		cout << "숫자 입력 : ";
		cin >> b;
		if (a != b) {
			a = b;
			continue;
		}
		cout << "숫자 입력 : ";
		cin >> c;
		if (b != c)
		{
			a = c;
			continue;
		}
		else
		{
			cout << c << "가 연속으로 3회 나왔어요!" << endl;
			cout<<"그리고 이건 뭘까요 ㅏㄴ도모르른 "<<endl;	
		}
	}

	
 cout<<1<<endl;

}
