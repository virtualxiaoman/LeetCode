//// Created by virtual小满 on 2025/3/20.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    int totalFruit(vector<int> &fruits) {
//        int size = fruits.size();
//        int cnt[100001] = {0}; // 1 <= fruits.length <= 105
//        int left = 0, ans = 0, kinds = 0;
//        for (int right = 0; right < size; ++right) {
//            if (cnt[fruits[right]] == 0)
//                ++kinds;
//            ++cnt[fruits[right]];  // 将当前水果fruits[right]加入哈希表cnt，并增加其计数。
//            while (kinds > 2) {
//                int out = fruits[left];
//                cnt[out]--;
//                if (cnt[out] == 0)
//                    --kinds;  // 水果种类的数量为0就删除掉
//                ++left;  // 左边界右移
//            }
//            ans = max(ans, right - left + 1);  // 窗口大小为right - left + 1
//        }
//        return ans;
//    }
//};
//
//
////class Solution {
////public:
////    int totalFruit(vector<int> &fruits) {
////        int size = fruits.size();
////        int slow = 0, fast = 0;
////        int cur_type = 1; // 当前种类数量(1~2为正常值，初始值为1，代表fruits[0]这一种种类)
////        int type_1 = fruits[0], type_2 = fruits[0];  // 1代表左侧起始的种类，2代表偏右侧的种类
////        int ans = 0, ret = 0;
////
////        for (; fast < size; fast++) {
////            cout << slow << fast << '|' << cur_type << type_1 << type_2 << '|' << ans << endl;
////            if (cur_type == 2) {
////                if (fruits[fast] != type_1 and fruits[fast] != type_2) {
////                    type_1 = type_2;  // 右侧的类别在当前变为了左侧
////                    type_2 = fruits[fast];  // 这是第三类
////                    ret = max(ret, ans);  // 返回值取最大值
////                    ans = 1;
////                    fast = ++slow;  // 重新初始化(当前起点slow是不行的)
////                }
//////                if (slow + 1 < size and fruits[slow + 1] == type_1)
//////                    slow++;  // 记录左侧类别的最右下标
////                ans++;
////            }
////            if (cur_type == 1) {
////                if (fruits[fast] != type_1) {
////                    type_2 = fruits[fast];  // 说明遇到第二类
////                    cur_type++;
////                }
////                slow++;
////                ans++;
////            }
////        }
////        ret = max(ret, ans);  // 返回值取最大值
////        return ret;
////    }
////};
//
//int main() {
//    Solution s;
//    vector<int> nums = {0, 1, 2, 2};
//    int ans = s.totalFruit(nums);
//    cout << ans;
//    return 0;
//}