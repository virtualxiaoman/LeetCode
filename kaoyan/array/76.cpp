////给你一个字符串 s 、一个字符串 t 。返回 s 中涵盖 t 所有字符的最小子串。
//// 如果 s 中不存在涵盖 t 所有字符的子串，则返回空字符串 "" 。
////示例 1：
////输入：s = "ADOBECODEBANC", t = "ABC"
////输出："BANC"
////示例 3:
////输入: s = "a", t = "aa"
////输出: ""
//
//// Created by virtual小满 on 2025/3/21.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//    // 辅助函数：判断当前窗口是否覆盖了t中的所有字符
//    bool is_covered(int cnt_s[], int cnt_t[]) {
//        for (int i = 'A'; i <= 'Z'; i++)
//            if (cnt_s[i] < cnt_t[i])
//                return false;  // 当前窗口中的字符数量不足，返回false
//        for (int i = 'a'; i <= 'z'; i++)
//            if (cnt_s[i] < cnt_t[i])
//                return false;
//        return true;
//    }
//
//public:
//    string minWindow(string s, string t) {
//        int size = s.length();
//        int ans_left = -1, ans_right = size;  // 初始化最小窗口的左右边界为无效值
//        int cnt_s[128]{};  // 记录s子串(当前窗口)中字符的出现次数，ASCII范围0-127
//        int cnt_t[128]{};  // t中字符的出现次数
//        for (char c: t)
//            cnt_t[c]++;  // 统计t中每个字符的出现次数
//        int left = 0;
//        for (int right = 0; right < size; right++) { // 移动子串右端点
//            cnt_s[s[right]]++; // 右端点字符移入子串
//            while (is_covered(cnt_s, cnt_t)) { // 涵盖
//                if (right - left < ans_right - ans_left) { // 找到更短的子串
//                    ans_left = left;
//                    ans_right = right; // 记录此时的左右端点
//                }
//                cnt_s[s[left]]--; // 左端点字母移出子串
//                left++;  // 收缩窗口
//            }
//        }
//        return ans_left < 0 ? "" : s.substr(ans_left, ans_right - ans_left + 1);
//    }
//};
//
//
////class Solution {
////public:
////    unordered_map<char, int> init_t(string t) {
////        unordered_map<char, int> cnt;
////        for (int i = 0; i < t.size(); i++)
////            cnt[t[i]]++;
////        return cnt;
////    }
////
////    int compare(unordered_map<char, int> cnt_s, unordered_map<char, int> cnt_t) {
////        int ret = 0;
////        for (const auto &pair: cnt_t) {
////            char key = pair.first;
////            int value = pair.second;
////            if (cnt_s[key] < value)
////                return -1; // 说明cnt_s对应的字符数量少了
////        }
////        for (const auto &pair: cnt_s) {
////            char key = pair.first;
////            int value = pair.second;
////            ret += value;
////            cout << "Key: " << key << ", Value: " << value << "|||";
////        }
////        cout << endl;
////        return ret;
////    }
////
////    int minWindow(string s, string t) {
////        unordered_map<char, int> cnt_s;
////        int slow = 0, fast = 0;
////        int size = s.size();
////        int ans = INT_MAX;
////
////        unordered_map<char, int> cnt_t = init_t(t);
////
////        for (; fast < size; fast++) {
////            char fast_char = s[fast];
////            cnt_s[fast_char]++;
////            int comp = compare(cnt_s, cnt_t);
////            if (compare(cnt_s, cnt_t) != -1) {
////                ans = min(comp, ans);  // 匹配成功
////                slow++;
////                char slow_char = s[slow];
////                cnt_s[slow_char]--;  // 对应项-1
////                if (cnt_s[slow_char] == 0)
////                    cnt_s.erase(slow_char);
////            }
////        }
////
////        return ans;
////    }
////};
//
//int main() {
//    Solution s;
//    string str_s = "ADOBECODEBANC", t = "ABC";
//    string ans = s.minWindow(str_s, t);
//    cout << ans << endl;
//    return 0;
//}