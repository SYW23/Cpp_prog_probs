// ����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
// ���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
// ����: [1,3,5,6], 5  ���: 2
// ����: [1,3,5,6], 2  ���: 1
// ����: [1,3,5,6], 7  ���: 4
// ����: [1,3,5,6], 0  ���: 0

# include <iostream>
# include <vector>
# include "main.h"
using namespace std;

int test7()
{
    vector<int> nums = { 1, 3, 5, 6 };
    bool flag = false;
    int target = 2;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= target)
        {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    if (not flag)
        cout << nums.size() << endl;
    
    return 0;
}