//// Created by virtual小满 on 2025/3/14.
////给定 s 和 t 两个字符串，当它们分别被输入到空白的文本编辑器后，如果两者相等，返回 true 。# 代表退格字符。
////注意：如果对空文本输入退格字符，文本继续为空。
//// 示例 1：
////输入：s = "ab#c", t = "ad#c"
////输出：true
////解释：s 和 t 都会变成 "ac"。
////示例 2：
////输入：s = "ab##", t = "c#d#"
////输出：true
////解释：s 和 t 都会变成 ""。
////示例 3：
////输入：s = "a#c", t = "b"
////输出：false
////解释：s 会变成 "c"，但 t 仍然是 "b"。
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    string back(string target) {
//        int target_size = target.size();
//        string ans;
//        int slow = 0, fast = 0;
//        for (; fast < target_size; fast++) {
//            if (target[fast] != '#')
//                ans.push_back(target[fast]);
//            else {
//                if (ans.size() != 0)
//                    ans.pop_back();
//            }
//        }
//        for (char s: ans) {
//            cout << s << " ";
//        }
//        cout << endl;
//        return ans;
//    }
//
//    bool backspaceCompare(string s, string t) {
//
//        string s2 = back(s);
//        string t2 = back(t);
//        int s_size = s2.size(), t_size = t2.size();
//        if (s_size != t_size)
//            return false;
//        for (int slow = 0; slow < s_size; slow++) {
//            if (s2[slow] != t2[slow])
//                return false;
//        }
//
//        return true;
//    }
//};
//
//int main() {
//    string str_s = "a##c";
//    string str_t = "#a#c";
//    Solution s;
//    bool ans = s.backspaceCompare(str_s, str_t);
//    cout << ans;
//    return 0;
//}