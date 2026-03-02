//// Created by virtual小满 on 2025/3/21.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//    string minWindow(string s, string t) {
//        int size = s.length();
//        int ans_left = -1, ans_right = size;
//        int cnt[128]{};  // 统计t中每个字符的出现次数
//        int less = 0;  // 记录需要覆盖的字符种类数
//        for (char c : t) {
//            if (cnt[c] == 0)
//                less++; // less为t中的不同字母个数
//            cnt[c]++;
//        }
//
//        int left = 0;
//        for (int right = 0; right < size; right++) {
//            char r_c = s[right];
//            cnt[r_c]--; // 右侧字符移入窗口，差异减少
//            if (cnt[r_c] == 0)
//                less--;  // 原来窗口内 r_c 的出现次数比 t 的少，现在一样多，那就是满足要求了
//            while (less == 0) { // 涵盖：所有字母的出现次数都是 >=
//                if (right - left < ans_right - ans_left) { // 找到更短的子串
//                    ans_left = left;
//                    ans_right = right;
//                }
//                char l_c = s[left];
//                if (cnt[l_c] == 0) {
//                    less++;  // 左边界字符移出窗口前，若其差异为0，移出后会缺少该种类
//                }
//                cnt[l_c]++; // 左侧字符移出窗口，差异增加
//                left++;
//            }
//        }
//        return ans_left < 0 ? "" : s.substr(ans_left, ans_right - ans_left + 1);
//    }
//};
//
//int main() {
//    Solution s;
//    string str_s = "ADOBECODEBANC", t = "ABC";
//    string ans = s.minWindow(str_s, t);
//    cout << ans << endl;
//    return 0;
//}