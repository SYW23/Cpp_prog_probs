// test3
// ����һ��Ŀ��ֵ��һ������
// ���������к�ΪĿ��ֵ������Ԫ�ص��±�
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
	int idx = 0;    // ����
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
	cout << "δ�ҵ�Ŀ��Ԫ��" << endl;
	return 0;
}
