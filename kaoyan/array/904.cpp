////你正在探访一家农场，农场从左到右种植了一排果树。这些树用一个整数数组 fruits 表示，其中 fruits[i] 是第 i 棵树上的水果 种类 。
////你想要尽可能多地收集水果。然而，农场的主人设定了一些严格的规矩，你必须按照要求采摘水果：
////你只有 两个 篮子，并且每个篮子只能装 单一类型 的水果。每个篮子能够装的水果总量没有限制。
////你可以选择任意一棵树开始采摘，你必须从 每棵 树（包括开始采摘的树）上 恰好摘一个水果 。
//// 采摘的水果应当符合篮子中的水果类型。每采摘一次，你将会向右移动到下一棵树，并继续采摘。
////一旦你走到某棵树前，但水果不符合篮子的水果类型，那么就必须停止采摘。
////给你一个整数数组 fruits ，返回你可以收集的水果的 最大 数目。
////
////示例 1：
////输入：fruits = [1,2,1]
////输出：3
////解释：可以采摘全部 3 棵树。
////示例 2：
////输入：fruits = [0,1,2,2]
////输出：3
////解释：可以采摘 [1,2,2] 这三棵树。
////如果从第一棵树开始采摘，则只能采摘 [0,1] 这两棵树。
////示例 4：
////输入：fruits = [3,3,3,1,2,1,1,2,3,3,4]
////输出：5
////解释：可以采摘 [1,2,1,1,2] 这五棵树。
//
//
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
//        unordered_map<int, int> cnt;
//        int left = 0, ans = 0;
//        for (int right = 0; right < size; ++right) {
//            ++cnt[fruits[right]];  // 将当前水果fruits[right]加入哈希表cnt，并增加其计数。
//            while (cnt.size() > 2) {
//                int out = fruits[left];
//                cnt[out]--;
//                if (cnt[out] == 0)
//                    cnt.erase(out);
////                auto it = cnt.find(fruits[left]); // 找到左边界水果在哈希表中的位置
////                --it->second;  // 不断移动左边界left，减少当前左边界水果对应的计数
////                if (it->second == 0) {
////                    cnt.erase(it);  // 如果某种水果计数为0则从哈希表中移除，直到哈希表大小不超过2，则窗口调整完毕。
////                }
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