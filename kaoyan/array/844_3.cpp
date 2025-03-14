//
//// Created by virtual小满 on 2025/3/14.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    bool backspaceCompare(string S, string T) {
//        int i = S.length() - 1, j = T.length() - 1;
//        int skipS = 0, skipT = 0;  // skip 表示当前待删除的字符的数量（计数器）
//
//        while (i >= 0 || j >= 0) {
//            while (i >= 0) {
//                if (S[i] == '#') {
//                    skipS++, i--;  // 如果char是#就可以抵消#前面的字符（使用skipS标志）
//                } else if (skipS > 0) {
//                    skipS--, i--;  // skipS标志意味着当前char不应该被比较
//                } else {
//                    break;  // 直到找到应该被比较的char（有效的char）才跳出
//                }
//            }
//            while (j >= 0) {
//                if (T[j] == '#') {
//                    skipT++, j--;
//                } else if (skipT > 0) {
//                    skipT--, j--;
//                } else {
//                    break;
//                }
//            }
//            if (i >= 0 && j >= 0) {
//                if (S[i] != T[j]) {
//                    return false;  // 没越界就比较对应的char
//                }
//            } else {
//                if (i >= 0 || j >= 0) {
//                    return false;  // i,j有一个越界了，但另一个还在，那肯定不相等（长度不等）
//                }
//            }
//            i--, j--;  // 移动指针以进行下一次比较
//        }
//        return true;
//    }
//};
//
//
//int main() {
//    string str_s = "a##c";
//    string str_t = "#a#c";
//    Solution s;
//    bool ans = s.backspaceCompare(str_s, str_t);
//    cout << ans;
//    return 0;
//}