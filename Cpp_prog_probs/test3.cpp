// test3
// 给定一个目标值和一个数组
// 返回数组中和为目标值的两个元素的下标
# include <iostream>
# include <string>
# include <map>
# include "main.h"
using namespace std;

int test3()
{
	int arr[10] = {12, 31, 5, 8, 19, 2, 13, 21, 4, 6};
	int tar;
	cin >> tar;

	map <int, int> tmp;
	int idx = 0;    // 索引
	for (auto &a : arr)
	{
		if (tmp.size() == 0)
		{
			tmp.insert(pair<int, int>(tar - a, idx));
		}
		else
		{
			auto iter = tmp.find(a);
			if (iter != tmp.end()) {
				cout << iter->second << " & " << idx << endl;
				break;
			}
			else
				tmp.insert(pair<int, int>(tar - a, idx));
		}
		++idx;
	}
	cout << "未找到目标元素" << endl;
	return 0;
}
