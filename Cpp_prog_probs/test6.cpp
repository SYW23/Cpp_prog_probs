// ����һ���������飬����Ҫ�� ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
// ��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�
// �������� nums = [1,1,2]������Ӧ�÷����µĳ��� 2������ԭ���� nums ��ǰ����Ԫ�ر��޸�Ϊ 1, 2��
// ���� nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
//����Ӧ�÷����µĳ��� 5������ԭ���� nums ��ǰ���Ԫ�ر��޸�Ϊ 0, 1, 2, 3, 4��

# include <iostream>
# include <vector>
# include "main.h"
using namespace std;

int test6()
{
    vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
    if (nums.empty() or nums.size() == 1) return nums.size();
    int start = nums[0], j = 1;
    for (int i = 1; i < nums.size(); ++i)
    {
        if (nums[i] != start)
        {
            nums[j] = nums[i];
            start = nums[i];
            j++;
        }
    }
    cout << j << endl;;

	return 0;
}