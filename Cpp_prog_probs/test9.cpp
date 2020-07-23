﻿// 给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
// 初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
// 你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素
// 输入:
// nums1 = [1, 2, 3, 0, 0, 0], m = 3
// nums2 = [2, 5, 6], n = 3
// 输出 : [1, 2, 2, 3, 5, 6]

# include <iostream>
# include <vector>
# include "main.h"
using namespace std;

int test9() {
    vector<int> nums1{ 4,0,0,0,0,0 };
    vector<int> nums2{ 1,2,3,5,6 };
    int m = 1, n = 5;
    if (m == 0) { nums1 = nums2; }
    int i = m-- + --n;
    while (n >= 0)
    {
        if (m >= 0 and nums1[m] > nums2[n])
        {
            nums1[i] = nums1[m];
            --m;
        }
        else
        {
            nums1[i] = nums2[n];
            --n;
        }
        --i;
    }
    for (auto& ind : nums1)
    {
        cout << ind << endl;
    }
    return 0;
}