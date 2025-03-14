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
//    string back(string ss) {
//        int slow = 0;
//        for (int fast = 0; fast < ss.length(); fast++) {
//            if (ss[fast] != '#')
//                ss[slow++] = ss[fast];  // 相当于push_back
//            else if (slow > 0)
//                slow--;  // 相当于pop_back
//
//        }
//        ss.resize(slow);
//        return ss;
//    }
//    bool backspaceCompare(string s, string t) {
//        return back(s) == back(t);
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