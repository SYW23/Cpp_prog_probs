// test1
// ����һ��Ӣ���ַ���,��дһ�δ����ҳ�����ַ��������ȳ������ε��Ǹ�Ӣ���ַ���
// ���룺һ���ַ���������ĸ������
// ��������ȳ������ε��Ǹ�Ӣ���ַ�
# include <iostream>
# include <string>
# include "main.h"
using namespace std;

int test1()
{
	string s;
	getline(cin, s);
	int characters[123] = {0};

	for (unsigned int i = 0; i < s.length(); i++)
	{
		if ((s[i] <= 'Z' and s[i] >= 'A') or (s[i] <= 'z' and s[i] >= 'a'))
		{
			characters[s[i]] ++;
			if (characters[s[i]] == 3)
			{
				cout << s[i] << endl;
				break;
			}
		}
	}
	
	system("pause");
	return 0;
}