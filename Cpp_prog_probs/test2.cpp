// test2
// �ж��ַ����Ƿ����
// ���true or false
# include <iostream>
# include <string>
# include "main.h"
using namespace std;

bool test2()
{
	string s;
	getline(cin, s);

	int i = 0, j = s.length()-1;
	while (i < j)
	{
		if (s[i] == s[j])
		{
			++i;
			--j;
		}
		else
		{
			return false;
		}
	}
	return true;
}
