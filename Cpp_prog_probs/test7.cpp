// 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
// 如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
// 输入: [1,3,5,6], 5  输出: 2
// 输入: [1,3,5,6], 2  输出: 1
// 输入: [1,3,5,6], 7  输出: 4
// 输入: [1,3,5,6], 0  输出: 0

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