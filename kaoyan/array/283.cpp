//// 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
////请注意 ，必须在不复制数组的情况下原地对数组进行操作。
//// 输入: nums = [0,1,0,3,12]
//// 输出: [1,3,12,0,0]
//
//// Created by virtual小满 on 2025/3/10.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    void moveZeroes(vector<int> &nums) {
//        int slow = 0, fast = 0, size = nums.size();
//
//        for (; fast < size; fast++) {
//            if (nums[fast] != 0) {
//                nums[slow++] = nums[fast];
//            }
//        }
//        for (; slow < size; slow++) {
//            nums[slow] = 0;
//        }
//        for (int num: nums) {
//            cout << num << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> nums = {1};
//    s.moveZeroes(nums);
//    return 0;
//}