## 个人力扣记录


## 1.二分查找
当定义`target`是在一个在左闭右闭的区间里，也就是`[left, right]`时。应该使用：

`while (left <= right)`和`right = middle - 1;``left = middle + 1;`
```c++
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1; // 定义target在左闭右闭的区间里，[left, right]
        while (left <= right) { // 当left==right，区间[left, right]依然有效，所以用 <=
            int middle = left + ((right - left) / 2);// 防止溢出 等同于(left + right)/2
            if (nums[middle] > target) {
                right = middle - 1; // target 在左区间，即[left, middle - 1]
            } else if (nums[middle] < target) {
                left = middle + 1; // target 在右区间，即[middle + 1, right]
            } else { // nums[middle] == target
                return middle; // 数组中找到目标值，直接返回下标
            }
        }
        // 未找到目标值
        return -1;
    }
};
```

## 2.双指针法
定义快慢指针

`快指针`：寻找新数组的元素，新数组就是不含有**目标**元素的数组

`慢指针`：指向更新后的新数组下标的位置

整个过程**保持不变**的性质是：[0,left)区间内的元素始终是目标元素。
本题中为：区间[0,left)中的元素都不等于val。

当左右指针遍历完输入数组以后，left的值就是输出数组的长度。
```c++
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int left = 0;
        for (int right = 0; right < n; right++) {
            if (nums[right] != val) {  // 右指针满足要求时
                nums[left] = nums[right];  // 将右指针赋给左指针
                left++;  // 更新左指针
            }
        }
        return left;
    }
};
```
下面的方法避免了需要保留的元素的重复赋值操作。
```c++
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0, right = nums.size()-1;
        while (left <= right) {
            if (nums[left] == val) {
                nums[left] = nums[right];
                right--;
            } else {
                left++;
            }
        }
        return left;
    }
};
```
