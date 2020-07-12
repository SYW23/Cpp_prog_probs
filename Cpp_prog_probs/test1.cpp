// test1
// 给定一个英文字符串,请写一段代码找出这个字符串中首先出现三次的那个英文字符。
// 输入：一个字符串，含字母和数字
// 输出：首先出现三次的那个英文字符
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