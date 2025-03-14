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
//        return build(S) == build(T);
//    }
//
//    string build(string str) {
//        string ret;
//        for (char ch: str) {
//            if (ch != '#') {
//                ret.push_back(ch);  // 添入末尾
//            } else if (!ret.empty()) {
//                ret.pop_back();  // 移除
//            }
//        }
//        return ret;
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